#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H
#include "player.hpp"
#include "gamefield.hpp"
enum class Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Playercontroller {
private:
    int x, y;
    Player& player;
    Gamefield& gameField;
public:
    Playercontroller(Player& p, Gamefield& f);

    void move(Direction direction);

    void getScore(int score);

    void getHealth(int health);

    void showCoords();

    void printField();
    
    void stats();
    
    bool check(int x, int y);

    ~Playercontroller() = default;
};

#endif