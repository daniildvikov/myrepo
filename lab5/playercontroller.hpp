#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H
#include "player.hpp"
#include "Field/gamefield.hpp"

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
    
    int getX() const;
    
    int getY() const;

    void setX(int value);
    
    void setY(int value);

    void getScore(int score);

    void getHealth(int health);

    void showCoords();

    void printField();
    
    void stats();

    bool check(int x, int y);
    Playercontroller& operator=(const Playercontroller& other);
    Gamefield& getField();
    Player& getPlayer();

    ~Playercontroller() = default;
};

#endif