#include "player.hpp"
#include <iostream>

Player::Player(int health, int score) {
    if (health < 0 || score < 0) {
        throw std::runtime_error("Wrong health or score");
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
        this->health = 0;
    }
    else{
        this->health = health;
    }
}