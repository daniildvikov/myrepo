#ifndef GAME_HPP
#define GAME_HPP
#include "../playercontroller.hpp"
#include "../Field/gamefield.hpp"
#include "../Field/PrintField.hpp"
#include "../Field/FieldBuilder.hpp"
#include "../player.hpp"
#include "Input.hpp"
#include <iostream>
using namespace std;
#include <array>

enum GameState{Active, Non_active, Win, Lose};

class Game {
private:
    GameState gameProgress;

public:
    explicit Game();
    void startGame();
    void quit();
    bool checkWin(Player &player, Playercontroller &cnt, Gamefield &field);
    bool checkLoss(Player& player);
    void restart();
    void handleCommand(Player& player, Playercontroller& cnt, Command command);
};

#endif