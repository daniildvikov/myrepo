#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H
#include "player.h"
enum class Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Playercontroller {
private:
    int x, y = 0;
    Player& player;
public:
    Playercontroller(Player& p);

    void move(Direction direction);

    void getScore(int score);

    void getHealth(int health);

    void showCoords();
    
    void stats();
    
    ~Playercontroller() = default;
};

#endif