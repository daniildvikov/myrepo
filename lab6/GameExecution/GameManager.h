#include <windows.h>
#include "../Logging/MessageHandler.h"
#include "../Logging/PlayerWon.h"
#include "../Logging/PlayerLost.h"
#include "../Logging/GameStarted.h"
#include "../Logging/ValidCommandPressed.h"
#include "../Logging/InvalidCommandPressed.h"
#include <fstream>
#include <iostream>
#include "../Control/Controller.h"
#include "../Field/Field.h"
#include "../Field/FieldBuilder.h"
#include "../Field/ShowField.h"
#include "../Player/Player.h"
#include "ReadFile.h"
#include "ConsoleCmdR.h"
#include "../Observer/Observer.h"

#ifndef OOP_GAMERUNNER_H
#define OOP_GAMERUNNER_H

enum GameState{Active, Non_active, Win, Lose};

class GameManager {
private:
    GameState gameProgress;
    MessageHandler* consoleHandler = nullptr;
    MessageHandler* fileHandler = nullptr;
public:
    ~GameManager();
    void run();
    bool isRunning();
    void changeGameState(GameState state);
    void askToPlayAgain();
    void trackMessage(Message* msg);
    void sendMessage();
    GameState getGameState();
};


#endif //OOP_GAMERUNNER_H
