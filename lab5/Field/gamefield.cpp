#include <iostream>
#include "gamefield.hpp"

Gamefield::Gamefield(int width, int height){
    if (width > MIN_SIZE && width < MAX_SIZE && height > MIN_SIZE && height < MAX_SIZE) {
        this->width = width;
        this->height = height;
    }
    else{
        this->width = D_WIDTH;
        this->height = D_HEIGHT;
    }
    gamefield = new Cell*[height];
    for(int i = 0; i < height; i++){
        gamefield[i] = new Cell[width];
    }
    start = {0,0};
    finish = {width -1, height -1};
}

Gamefield::Gamefield(Gamefield& other){
    width = other.width;
    height = other.height;
    start = other.start;
    finish = other.finish;

    gamefield = new Cell*[height];
    for(int i = 0; i < height; i++){
        gamefield[i] = new Cell[width];
    }
    for(int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            gamefield[i][j] = other.gamefield[i][j];
        }
    }
}

Gamefield::Gamefield(Gamefield&& other) : width(other.width), height(other.height), start(std::move(other.start)), finish(std::move(finish)), gamefield(other.gamefield){
        other.gamefield = nullptr;
    }

Gamefield::~Gamefield(){   
    for (int i = 0; i < height; i++)
    {
        delete [] gamefield[i];
    }
    delete [] gamefield;
}

Cell& Gamefield::getCell(int x, int y) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        return gamefield[x][y];
    } else {
        throw std::out_of_range("Za pole vishel");
    }
}

Gamefield& Gamefield::operator=(const Gamefield& other) {
    if (this == &other){
        return *this;
    }
    start = other.start;
    finish = other.finish;
    width = other.width;
    height = other.height;
    gamefield = new Cell*[height];
    for (int i = 0; i < height; ++i) {
        gamefield[i] = new Cell[width];
    }
    
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j){
            gamefield[i][j] = other.gamefield[i][j];
            }
        }
    return *this;
}

int Gamefield::checkCoords(std::pair<int,int> start, std::pair<int,int> finish, int value) const {return start.first >= 0 && start.first < value && start.second >= 0 && start.second < value; }
int Gamefield::getWidth() const { return this->width; }
int Gamefield::getHeight() const { return this->height; }
std::pair<int,int> Gamefield::getStart() const{
    return start;
}
std::pair<int,int> Gamefield::getExit() const{
    return finish;
}
