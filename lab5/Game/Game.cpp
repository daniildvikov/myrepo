#include "Game.hpp"

Game::Game() : gameProgress(GameState::Non_active), cnt{player, field}, field(field) {}

bool Game::getWin(){
    return this->win;
}
void Game::choose_lvl(int level){
    this->level = level;
}

bool Game::generate_lvl(){
    switch (this->level)
    {
    case 1:
        generate_lvl_1();
        break;
    case 2:
        generate_lvl_2();
        break;
    default:
        return false;
    }
    return true;
}
void Game::generate_lvl_1(){
    Player player1;
    Gamefield field1;
    this->player = player1;
    Playercontroller cnt1(player1, field);
    this->cnt = cnt1;
    FieldBuilder fb(field1, player1,cnt1);
    fb.buildField(1);
    this->field = field1;
}

void Game::generate_lvl_2(){
    Player player1;
    Gamefield field1;
    this->player = player1;
    Playercontroller cnt1(player1, field);
    this->cnt = cnt1;
    FieldBuilder fb(field1, player1,cnt1);
    fb.buildField(2);
    this->field = field1;
}

void Game::endLevel(bool win){
    notify(ViewEvent::EndGame);
    std::string quit;
    std::cin >> quit;
    if (quit == "q"){
        exit(0);
    }
    notify(ViewEvent::ChooseLevel);
}
Playercontroller& Game::getPlayerController(){
    return this->cnt;
}

void Game::startGame() {
    notify(ViewEvent::ChooseLevel);
    std::string level;
    while (true){
        
        std::cin >> level;
        try{
            choose_lvl(std::stoi(level));
        }
        catch(std::invalid_argument){
            choose_lvl(0);
        }
        if (!generate_lvl()){
            notify(ViewEvent::InvalidLevel);
        }else{
            this->startLevel();
        }
    }
}

void Game::startLevel(){

    char ch;
    notify(ViewEvent::InitGame);
    while (true) {
        InputHandler inputHandler("../command.txt");

        int ch = getchar();
        std::string input(1, ch);
        Command command = inputHandler.handleInput(input);
        handleCommand(player, cnt, command);
        notify(ViewEvent::InitGame);
        if (checkWin(player, cnt, field)) {
            this->win = true;
            gameProgress = GameState::Win;
            cout << "You win!" << endl;
            break;
        }
        if (checkLoss(player)) {
            this->win = false;
            gameProgress = GameState::Lose;
            cout << "You lose!" << endl;
            break;
        }
    }
    endLevel(win);
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

void Game::addObserver(Observer* observer)
{
    this->observers.push_back(observer);
}

void Game::removeObserver(Observer* observer)
{
    this->observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void Game::notify(ViewEvent view_event)
{
    for (Observer* observer : observers)
        observer->update(view_event);
}