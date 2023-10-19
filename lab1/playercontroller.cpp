#include <iostream>
#include "Playercontroller.hpp"
#include "gamefield.hpp"
#include <tuple>

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
            if(gameField.getCell(j, i).getCellPassible()){
                if(x == j && y == i){
                    std::cout << "P";
                }
                else{
                    std::cout << "0";
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
    std::cout<< "Координата по х: " << this->x << "  Координата по y: " << this->y << std::endl;
}

void Playercontroller::stats(){
    std::cout << "Ваше здоровье: " << player.getHealth() << std::endl;
    std::cout << "Количество очков: " << player.getScore() << std::endl;
}

bool Playercontroller::check(int x, int y){
    return (x >= 0 && x < this->gameField.getWidth() && y >= 0 && y < this->gameField.getHeight() && this->gameField.getCell(x, y).getCellPassible() == true);}

