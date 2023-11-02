#include "PlayerEvent.hpp"
#ifndef SCORE_HPP
#define SCORE_HPP

class Score : public PlayerEvent{
public:
    Score(Player& player);
    void triggerEvent() override;
};

#endif