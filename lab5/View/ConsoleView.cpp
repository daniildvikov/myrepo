#include "ConsoleView.hpp"

ConsoleView::ConsoleView(Game *game) : game(game), game_observer(new GameObserver(game, this))
{
}

ConsoleView::~ConsoleView()
{
    delete game_observer;
}

void ConsoleView::update()
{
    Gamefield gameField;
    Player player;
    Playercontroller cnt(player, gameField);
    PrintField view(gameField, cnt);
    system("cls");
    viewField();
    viewPlayer();
}

void ConsoleView::updateChooseLevel()
{
    std::cout << "Вы начали игру!\n";
    std::cout << "Введите уровень с которого хотите начать игру!";
}

void ConsoleView::updateInvalidLevel()
{
    std::cout << "Вы ввели некорректный уровень! Попробуйте заново!";
}


void ConsoleView::updateEndGame()
{
    update();
    if (game->getWin()){
        std::cout << "Поздравляю, Вы прошли уровень!" << '\n';
    }
    else{
        std::cout << "Поздравляю, Вы мертвы! Теперь вы призрак!" << '\n';
    }
    std::cout << "Введите q, если хотите заверишть игру! Если введешь что-то другое игра начнется снова...n";
}

void ConsoleView::viewField(){
    Gamefield gameField;
    Player player;
    Playercontroller cnt(player, gameField);
    PrintField view(gameField, cnt);
    for(int i = 0; i < game->getPlayerController().getField().getHeight(); i++){
        for(int j = 0; j < game->getPlayerController().getField().getWidth(); j++){
            Event* event = game->getPlayerController().getField().getCell(j, i).getEvent();
            if(game->getPlayerController().getField().getCell(j, i).getCellPassible()){
                if(game->getPlayerController().getX() == j && game->getPlayerController().getY() == i){
                    std::cout << "P";
                }
                else if(dynamic_cast<Score *>(event)){
                    std::cout <<"$";
                }
                else if(dynamic_cast<Teleport *>(event)){
                    std::cout <<"T";
                }
                else if(dynamic_cast<HealEvent *>(event)){
                    std::cout <<"+";
                }
                else if(dynamic_cast<Enemy *>(event)){
                    std::cout <<"-";
                }
                else{
                    std::cout << ".";
                }
            }
            else{
                std::cout << "#";
            }
        }
        std::cout << '\n';
    }
}

void ConsoleView::viewPlayer()
{
        std::cout << "Характеристики: " << std::endl;
        std::cout << "Здоровье: " << game->getPlayerController().getPlayer().getHealth() << std::endl;
        std::cout << "Монеты: " << game->getPlayerController().getPlayer().getScore() << std::endl;
        std::cout << "X: " << game->getPlayerController().getX() << std::endl;
        std::cout << "Y: " << game->getPlayerController().getY() << std::endl;
}