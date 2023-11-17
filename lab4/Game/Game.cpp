#include "Game.hpp"

Game::Game() : gameProgress(GameState::Non_active) {}

void Game::startGame() {
    Gamefield field;
    Player player;
    Playercontroller cnt(player, field);
    PrintField view(field, cnt);
    
    int level;
    cout <<"Select level 1 or 2\n";
    while(level != 1 and level != 2){
        cin >>level;
    }
    if(level == 1){
        FieldBuilder fb(field, player,cnt);
        fb.buildField(1);
    }
    else if(level == 2){
        FieldBuilder fb(field, player,cnt);
        fb.buildField(2);
    }
    view.printField();

    char ch;
    while (true) {
        InputHandler inputHandler("../command.txt");

        int ch = getchar();
        std::string input(1, ch);
        Command command = inputHandler.handleInput(input);
        handleCommand(player, cnt, command);
        view.printField();
        if (checkWin(player, cnt, field)) {
            gameProgress = GameState::Win;
            cout << "You win!" << endl;
            break;
        }
        if (checkLoss(player)) {
            gameProgress = GameState::Lose;
            cout << "You lose!" << endl;
            break;
        }
    }
}

void Game::handleCommand(Player& player, Playercontroller& cnt, Command command) {
    std::string stats_message = "\n   Press any key to continue\n";
    switch(command) {
        case Command::MOVE_UP:
            cnt.move(Direction::UP);
            break;
        case Command::MOVE_LEFT:
            cnt.move(Direction::LEFT);
            break;
        case Command::MOVE_DOWN:
            cnt.move(Direction::DOWN);
            break;
        case Command::MOVE_RIGHT:
            cnt.move(Direction::RIGHT);
            break;
        case Command::RESTART:
            restart();
            break;
        case Command::QUIT:
            exit(0);
            break;
        case Command::NOTHING:
            break;
    }
}

bool Game::checkWin(Player &player, Playercontroller &cnt, Gamefield &field) {
    if(player.getScore() >= 20 || (cnt.getX() == field.getExit().first && cnt.getY() == field.getExit().second))
        return true;
    return false;
}

bool Game::checkLoss(Player& player) {
    if(player.getHealth() < 0 )
        return true;
    return false;
}

void Game::restart() {
    gameProgress = GameState::Non_active;
    startGame();
}

void Game::quit() {
    exit(0);
}