#include <iostream>
#include "Playercontroller.h"

Playercontroller::Playercontroller(Player& p) : player(p){}

void Playercontroller::move(Direction direction) {
//исходная позиция левый нижний угол
    switch (direction) {
        case Direction::UP:
            y++;
            break;
        case Direction::DOWN:
            if(y > 0){
                y--;
            }
            else{
                std::cout << "Куда пошёл??" << std::endl;
            }
            break;
        case Direction::LEFT:
            if(x > 0){
                x--;
            }
            else{
                std::cout << "Куда пошёл??" << std::endl; 
            }
            break;
        case Direction::RIGHT:
            x++;
            break;
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