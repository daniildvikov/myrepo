#include "player.h"
#include <iostream>

Player::Player(int health, int score) {
    if (health < 0 || score < 0) {
        throw std::runtime_error("Неверные значения для здоровья или счета");
    }
    this->health = health;
    this->score = score;
    this->x = 0;
    this->y = 0;
}

int Player::getHealth() const{
    return this->health;
}

int Player::getScore() const{
    return this->score;
}

int Player::getX() const{
    return this->x;
}

int Player::getY() const{
    return this->y;
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

void Player::setX(int x){
    if(x < 0){
        this->x =0;
    }
    else{
        this->x = x; 
    }
}

void Player::setY(int y){
    if(y < 0){
        this->y = 0;
    }
    else{
        this->y = y; 
    }
}   