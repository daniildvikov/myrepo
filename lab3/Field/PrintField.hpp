#include <iostream>
#include <tuple>
#include "../Playercontroller.hpp"
#include "../events/Score.hpp"
#include "../events/Enemy.hpp"
#include "../events/HealEvent.hpp"
#include "../events/Teleport.hpp"
#ifndef PRINTFIELD_HPP
#define PRINTFIELD_HPP

class PrintField
{
private:
    Gamefield &gameField;
    Playercontroller &cnt;
public:
    PrintField(Gamefield &gameField, Playercontroller &cnt);
    void printField();
};

#endif