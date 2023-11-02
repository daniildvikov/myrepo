#ifndef WIN_EVENT_HPP
#define WIN_EVENT_HPP

#include "PlayerEvent.hpp"

class WinEvent : public PlayerEvent {
public:
    WinEvent(Player& player);
    void triggerEvent() override;
};

#endif