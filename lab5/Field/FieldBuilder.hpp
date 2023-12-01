#include "gamefield.hpp"
#include "../Player.hpp"
#include "../events/HealEvent.hpp"
#include "../events/Enemy.hpp"
#include "../events/Score.hpp"
#include "../events/Teleport.hpp"
#include "../playercontroller.hpp"
#include "../events/Win.hpp"
#include "../events/Lose.hpp"
#ifndef OOP_FIELDBUILDER_H
#define OOP_FIELDBUILDER_H

class FieldBuilder {
public:
    FieldBuilder(Gamefield& field, Player& player, Playercontroller& cnt);
    ~FieldBuilder() = default;

    void buildField(int lvl);

private:
    Gamefield& field;
    Player& player;
    Playercontroller& cnt;
};
#endif