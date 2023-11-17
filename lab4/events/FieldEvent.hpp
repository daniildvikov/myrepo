#include "Event.hpp"
#include "../Playercontroller.hpp"
#include "../Field/Gamefield.hpp"
#include "../Player.hpp"
#ifndef FIELDEVENT_H
#define FIELDEVENT_H


class FieldEvent: public Event {
public:
    FieldEvent(Player& player, Playercontroller& cnt, Gamefield& field);

    void triggerEvent() override = 0;
protected:
    Player& player;
    Playercontroller& cnt;
    Gamefield& field;
};

#endif
