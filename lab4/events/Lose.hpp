#ifndef LOSE_EVENT_HPP
#define LOSE_EVENT_HPP

#include "PlayerEvent.hpp"

class LoseEvent : public PlayerEvent {
public:
    LoseEvent(Player& player);
    void triggerEvent() override;
};

#endif