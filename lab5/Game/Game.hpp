#ifndef GAME_HPP
#define GAME_HPP
#include "../playercontroller.hpp"
#include "../Field/gamefield.hpp"
#include "../Field/PrintField.hpp"
#include "../Field/FieldBuilder.hpp"
#include "../player.hpp"
#include "Input.hpp"
#include "../View/EnumView.hpp"
#include "../View/IObserver.hpp"
#include "../View/IObservable.hpp"
#include <iostream>
#include <array>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>


enum GameState{Active, Non_active, Win, Lose};

class Game : Observable{
private:
    Player player;
    Gamefield field;
    GameState gameProgress;
    Playercontroller cnt;
    std::vector<Observer*> observers;
    int level;
    bool win;
public:
    explicit Game();
    void choose_lvl(int level);
    bool generate_lvl();
    void generate_lvl_1();
    void generate_lvl_2();
    void endLevel(bool win);
    void startGame();
    void startLevel();
    void quit();
    Playercontroller& getPlayerController();
    bool checkWin(Player &player, Playercontroller &cnt, Gamefield &field);
    bool checkLoss(Player& player);
    void restart();
    void handleCommand(Player& player, Playercontroller& cnt, Command command);
    bool getWin();
    void addObserver(Observer* apObserver) override;
    void removeObserver(Observer* observer) override;
    void notify(ViewEvent view_event) override;
};

#endif