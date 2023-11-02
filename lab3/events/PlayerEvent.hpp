#include "Event.hpp"
#include "../Player.hpp"
#ifndef PLAYEREVENT_H
#define PLAYEREVENT_H

class PlayerEvent : public Event{
public:
    PlayerEvent(Player& player);
    virtual ~PlayerEvent() = default;
    void triggerEvent() override = 0;
protected:
    Player& player;
};

#endif