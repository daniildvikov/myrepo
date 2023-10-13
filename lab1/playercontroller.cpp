#include <iostream>
#include "Playercontroller.hpp"
#include "gamefield.hpp"
#include <tuple>
Playercontroller::Playercontroller(Player& p, Gamefield& f) : player(p), gameField(f){
    std::tie(x,y) = gameField.getStart();
}

void Playercontroller::move(Direction direction) {
    int newX, newY = x, y;
    switch (direction) {
        case Direction::UP:
            newY--;
            break;
        case Direction::DOWN:
            newY++;
            break;
        case Direction::LEFT:
            newX++;
            break;
        case Direction::RIGHT:
            newY--;
            break;
    }
    if(check(newX, newY)){
        this->x = newX;
        this->y = newY;
    }
}

void Playercontroller::getHealth(int health){
    this->player.setHealth(this->player.getHealth() + health);
}

void Playercontroller::getScore(int score){
    this->player.setScore(this->player.getScore() + score);
}

void Playercontroller::showCoords(){
    std::cout<< "Координата по х: " << this->x << "  Координата по y: " << this->y << std::endl;
}
void Playercontroller::stats(){
    std::cout << "Ваше здоровье: " << player.getHealth() << std::endl;
    std::cout << "Количество очков: " << player.getScore() << std::endl;
}

bool Playercontroller::check(int x, int y){
    return (x >= 0 && x < this->gameField.getWidth() && y >= 0 && y < this->gameField.getHeight() && this->gameField.getCell(x, y).getCellPassible() == true);}