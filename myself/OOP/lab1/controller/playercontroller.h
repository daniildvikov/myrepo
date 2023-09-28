#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H
#include "../player/player.h"
enum class Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class playercontroller {
private:
    Player& player;
public:
    playercontroller(Player& p);

    void move(Direction direction);

    void getScore(int score);

    void getHealth(int health);
    
    ~playercontroller() = default;
};

#endif