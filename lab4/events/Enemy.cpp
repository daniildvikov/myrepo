#include "Enemy.hpp"

Enemy::Enemy(Player &player) : PlayerEvent(player){}

void Enemy::triggerEvent(){
    player.setHealth(player.getHealth() - 5);
    player.setScore(player.getScore() + 1);
}