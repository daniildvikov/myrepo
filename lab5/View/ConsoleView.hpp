#ifndef ConsoleView_h
#define ConsoleView_h
#include "GameObserver.hpp"
#include "../Game/Game.hpp"
#include "../Field/PrintField.hpp"
#include "IView.hpp"
#include <iostream>
#include <iomanip>
#include <functional>
#include <unordered_map>
#include <typeinfo>


class ConsoleView: public IView
{
    Game* game;
    GameObserver* game_observer;
    Gamefield* field;
    Player* player;
    Playercontroller* cnt;
    PrintField* view;
    void viewField();
    void viewPlayer();
    public:
        ConsoleView(Game* game);
        ~ConsoleView();
        void update();
        void updateChooseLevel();
        void updateInvalidLevel();
        void updateEndGame();
};


#endif