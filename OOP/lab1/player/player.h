#ifndef Player_h
#define Player_h
#include <iostream>
class Player
{
private:
    int health;
    int score;
public:
    explicit Player(int health = 100, int score = 0);

    int getHeath() const;
    
    int getScore() const;

    void setHealth(int health);

    void setScore(int score);
};
#endif