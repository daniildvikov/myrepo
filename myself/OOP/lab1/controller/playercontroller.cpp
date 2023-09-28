#include <iostream>
#include "playercontroller.h"

playercontroller::playercontroller(Player& p) : player(p){}

void playercontroller::move(Direction direction) {
    int currentX = player.getX();
    int currentY = player.getY();

    switch (direction) {
        case Direction::UP:
            player.setY(currentY - 1);
            break;
        case Direction::DOWN:
            player.setY(currentY + 1);
            break;
        case Direction::LEFT:
            player.setX(currentX - 1);
            break;
        case Direction::RIGHT:
            player.setX(currentX + 1);
            break;
        default:
            std::cout << "Не туда свернул чуток!" << std::endl;
            break;
    }
}

void playercontroller::getHealth(int health){
    this->player.setHealth(this->player.getHeath() + health);
}

void playercontroller::getScore(int score){
    this->player.setScore(this->player.getScore() + score);
}