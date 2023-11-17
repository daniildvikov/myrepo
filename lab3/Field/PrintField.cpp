#include "PrintField.hpp"

PrintField::PrintField(Gamefield& gameField, Playercontroller& cnt): gameField(gameField), cnt(cnt){}

void PrintField::printField(){
    for(int i = 0; i < gameField.getHeight(); i++){
        for(int j = 0; j < gameField.getWidth(); j++){
            Event* event = gameField.getCell(j, i).getEvent();
            if(gameField.getCell(j, i).getCellPassible()){
                if(cnt.getX() == j && cnt.getY() == i){
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
    cnt.stats();
}