#include <iostream>
#include "Playercontroller.hpp"
#include <tuple>
#include "events/Score.hpp"
#include "events/Enemy.hpp"
#include "events/HealEvent.hpp"
#include "events/Teleport.hpp"
Playercontroller::Playercontroller(Player& p, Gamefield& f) : player(p), gameField(f){
    std::tie(x,y) = gameField.getStart();
}

void Playercontroller::move(Direction direction) {
    switch (direction) {
        case Direction::DOWN:
            if (y < gameField.getHeight() && gameField.getCell(x, y+1).getCellPassible()){
                y += 1;
            }
            break;
        case Direction::UP:
            if (y > 0 && gameField.getCell(x, y-1).getCellPassible()){
                y -= 1;
            }
            break;
        case Direction::LEFT:
            if (x > 0 && gameField.getCell(x-1, y).getCellPassible()){
                x -= 1;
            }
            break;
        case Direction::RIGHT:
            if (x < gameField.getWidth() && gameField.getCell(x+1, y).getCellPassible()){
                x += 1;
            }
            break;
    }
    Event* event = gameField.getCell(x,y).getEvent();
    // auto *p1 = dynamic_cast<PlayerEvent *>(event);
    if(event){
        event->triggerEvent();
        gameField.getCell(x,y).setEvent(nullptr);
    }
}

Player& Playercontroller::getPlayer(){
    return this->player;
}

Gamefield& Playercontroller::getField(){
    return this->gameField;
}

int Playercontroller::getX() const{
    return this->x;
}

int Playercontroller::getY() const{
    return this->y;
}

void Playercontroller::setX(int value) {
    if(value < gameField.getWidth() && value > 0 && gameField.getCell(value, y).getCellPassible()){
        this->x = value;
    }
}

void Playercontroller::setY(int value) {
    if(value < gameField.getHeight() && value > 0 && gameField.getCell(x, value).getCellPassible()){
        this->y = value;
    }
}

void Playercontroller::getHealth(int health){
    this->player.setHealth(this->player.getHealth() + health);
}

void Playercontroller::getScore(int score){
    this->player.setScore(this->player.getScore() + score);
}


void Playercontroller::showCoords(){
    std::cout<< "X: " << this->x << "  Y: " << this->y << std::endl;
}

void Playercontroller::stats(){
    std::cout<< "X: " << this->x << "  Y: " << this->y << std::endl;
    std::cout << "Health: " << player.getHealth() << std::endl;
    std::cout << "Score: " << player.getScore() << std::endl;
}

bool Playercontroller::check(int x, int y){
    return (x >= 0 && x < this->gameField.getWidth() && y >= 0 && y < this->gameField.getHeight() && this->gameField.getCell(x, y).getCellPassible() == true);}

Playercontroller& Playercontroller::operator=(const Playercontroller& other){
    this->gameField = other.gameField;
    this->player = other.player;
    this->x = other.x;
    this->y = other.y;
    return *this;
}
