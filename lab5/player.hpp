#ifndef Player_hpp
#define Player_hpp
#define DEFAULT_HEALTH 50
#define DEFAULT_SCORE 0
#include <iostream>

class Player{
private:
    int health;
    int score;

public:
    Player(int health = DEFAULT_HEALTH, int score = DEFAULT_SCORE);

    int getHealth() const;
    
    int getScore() const;

    void setHealth(int health);

    void setScore(int score);
    
    ~Player() = default;
};
#endif  