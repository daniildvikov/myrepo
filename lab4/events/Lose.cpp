
#include "Lose.hpp"

LoseEvent::LoseEvent(Player& player) : PlayerEvent(player) {}

void LoseEvent::triggerEvent() {
    std::cout <<"LOSER!!";
}