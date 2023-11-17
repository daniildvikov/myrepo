#include "FieldEvent.hpp"
#ifndef TELEPORT_HPP
#define TELEPORT_HPP

class Teleport: public FieldEvent{
public:
    Teleport(Player &player, Playercontroller &cnt, Gamefield &field);
    void triggerEvent() override;
};

#endif