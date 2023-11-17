#include "Score.hpp"

Score::Score(Player& player) : PlayerEvent(player){}

void Score::triggerEvent(){
    player.setScore(player.getScore() + 5);
}