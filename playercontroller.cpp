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
            if (y < gameField.getHeight() && gameField.getCell(x, y+1).getCellPassible() && Lose() == false){
                y += 1;
            }
            break;
        case Direction::UP:
            if (y > 0 && gameField.getCell(x, y-1).getCellPassible() && Lose() == false){
                y -= 1;
            }
            break;
        case Direction::LEFT:
            if (x > 0 && gameField.getCell(x-1, y).getCellPassible() && Lose() == false){
                x -= 1;
            }
            break;
        case Direction::RIGHT:
            if (x < gameField.getWidth() && gameField.getCell(x+1, y).getCellPassible() && Lose() == false){
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

void Playercontroller::printField(){
    for(int i = 0; i < gameField.getHeight(); i++){
        for(int j = 0; j < gameField.getWidth(); j++){
            Event* event = gameField.getCell(j, i).getEvent();
            if(gameField.getCell(j, i).getCellPassible()){
                if(x == j && y == i){
                    std::cout << "P";
                }
                else if(dynamic_cast<Score *>(event)){
                    std::cout <<"$";
                }
                else if(dynamic_cast<Teleport *>(event)){
                    std::cout <<"T";
                }
                else if(dynamic_cast<HealEvent *>(event)){
                    std::cout <<"+";
                }
                else if(dynamic_cast<Enemy *>(event)){
                    std::cout <<"-";
                }
                else{
                    std::cout << ".";
                }
            }
            else{
                std::cout << "#";
            }
        }
        std::cout << '\n';
    }
}

void Playercontroller::showCoords(){
    std::cout<< "X: " << this->x << "  Y: " << this->y << std::endl;
}

void Playercontroller::stats(){
    std::cout << "Health: " << player.getHealth() << std::endl;
    std::cout << "Score: " << player.getScore() << std::endl;
}

bool Playercontroller::check(int x, int y){
    return (x >= 0 && x < this->gameField.getWidth() && y >= 0 && y < this->gameField.getHeight() && this->gameField.getCell(x, y).getCellPassible() == true);}

bool Playercontroller::Win(){
    if(player.getScore() >= 20 || (getX() == gameField.getExit().first && getY() == gameField.getExit().second)){
        std::cout << "WIN URA URA";
        exit(0);
        return true;
    }
    return false;
}

bool Playercontroller::Lose(){
    if(player.getHealth() < 0 ){
        std::cout << "LOSE, BACK TO START\n";
        exit(0);
        return true;
    }
    return false;
}

void Playercontroller::startGame() {
    this->printField();
    char dir;
    while (dir != 'q') {
        std::cin >> dir;
        switch (dir) {
            case 'w':
                move(Direction::UP);
                showCoords();
                stats();
                printField();
                Win();
                Lose();
                break;
            case 's':
                this->move(Direction::DOWN);
                showCoords();
                stats();
                printField();
                Win();
                Lose();
                break;
            case 'a':
                this->move(Direction::LEFT);
                showCoords();
                stats();
                printField();
                Win();
                Lose();
                break;
            case 'd':
                this->move(Direction::RIGHT);
                showCoords();
                stats();
                printField();
                Win();
                Lose();
                break;
            case 'p':
                showCoords();
                stats();
                printField();
                Win();
                Lose();
                break;
        }
    }
}