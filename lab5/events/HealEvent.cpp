#include "PlayerEvent.hpp"
#include "HealEvent.hpp"

HealEvent::HealEvent(Player& player): PlayerEvent(player){}
void HealEvent::triggerEvent(){
    player.setHealth(player.getHealth()+ 10);
}

