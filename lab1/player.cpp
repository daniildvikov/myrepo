#include "player.h"
#include <iostream>

Player::Player(int health, int score) {
    if (health < 0 || score < 0) {
        throw std::runtime_error("Неверные значения для здоровья или счета");
    }
    this->health = health;
    this->score = score;
}

int Player::getHealth() const{
    return this->health;
}

int Player::getScore() const{
    return this->score;
}

void Player::setScore(int score){
    if(score < 0){
        this->score = 0;
    }
    else{
        this->score = score;
    }
}

void Player::setHealth(int health){
    if(score < 0){
        this->score = 0;
    }
    else{
        this->score = score;
    }
}