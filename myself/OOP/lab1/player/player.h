#ifndef Player_h
#define Player_h
#include <iostream>

class Player{
private:
    int health;
    int score;
    int x; // pos x
    int y; // pos y

public:
    explicit Player(int health = 100, int score = 0);

    int getHeath() const;
    
    int getScore() const;

    int getX() const;
        
    int getY() const;

    void setHealth(int health);

    void setScore(int score);

    void setX(int x);

    void setY(int y);
    
    ~Player() = default;
};
#endif  