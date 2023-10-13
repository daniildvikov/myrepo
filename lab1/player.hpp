#ifndef Player_hpp
#define Player_hpp
#include <iostream>

class Player{
private:
    int health;
    int score;

public:
    Player(int health, int score);

    int getHealth() const;
    
    int getScore() const;

    void setHealth(int health);

    void setScore(int score);
    
    ~Player() = default;
};
#endif  