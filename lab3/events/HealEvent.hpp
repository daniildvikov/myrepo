#include "PlayerEvent.hpp"
#ifndef HEALEVENT_H
#define HEALEVENT_H

class HealEvent : public PlayerEvent{
public:
    HealEvent(Player& player);
    void triggerEvent() override;
};

#endif