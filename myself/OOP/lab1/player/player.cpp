#include "player.h"
#include <iostream>

Player::Player(int health, int score){
    if(health <= 0 || score <= 0){
        throw "Wtf?";
    }
    this->health = health;
    this->score = score;
    this->x = 0;
    this->y = 0;
}

int Player::getHeath() const{
    return this->health;
}

int Player::getScore() const{
    return this->score;
}

int Player::getX() const{
    return this->x;
}

int Player::getX() const{
    return this->x;
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