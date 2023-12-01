#include "PlayerEvent.hpp"
#ifndef ENEMY_HPP
#define ENEMY_HPP

class Enemy: public PlayerEvent{
public:
    explicit Enemy(Player &player);
    ~Enemy() override = default;
    void triggerEvent() override;
};

#endif