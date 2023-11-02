#ifndef gamefield_hpp
#define gamefield_hpp
#define D_WIDTH 15
#define D_HEIGHT 15
#define MIN_SIZE 2
#define MAX_SIZE 101
#include <iostream>
#include "Cell.hpp"

class Gamefield
{
private:
    Cell** gamefield;
    int width, height;
    std::pair <int, int> start;
    std::pair <int, int> finish;
public:
    Gamefield(int width = D_WIDTH, int height = D_HEIGHT);
    Gamefield(Gamefield& other);
    Gamefield(Gamefield&& other);
    Cell& getCell(int x, int y);
    ~Gamefield();
    int checkCoords(std::pair<int,int> start,std::pair<int,int> finish ,int value) const;
    int getWidth() const;
    int getHeight() const;
    std::pair<int,int> getStart() const;
    std::pair<int,int> getExit() const;
};

#endif