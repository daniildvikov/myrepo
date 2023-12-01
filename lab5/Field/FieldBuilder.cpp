#include "FieldBuilder.hpp"

FieldBuilder::FieldBuilder(Gamefield& field, Player& player, Playercontroller& cnt) : field(field), player(player), cnt(cnt) {}

void FieldBuilder::buildField(int lvl) { 
    if(lvl == 1){
        for(int i = 0; i <field.getHeight(); i++){
            for(int j = 0; j < field.getWidth(); j++){
                if ((i - j) % 4 == 0 && i % 2 == 0 && j % 4 == 0){
                    field.getCell(i, j).setEvent(new HealEvent(player));
                }
                else if ((i - j) % 7 == 0 && i % 5 == 0){
                    field.getCell(i, j).setEvent(new Enemy(player));
                }
                else if ((i + j) % 4 == 0 && i % 6 == 0){
                    field.getCell(i, j).setEvent(new Score(player));
                }
                else if ((i + j) % 3 == 0 && i % 2 == 0 && j % 6 == 0){
                    field.getCell(i, j).setEvent(nullptr);
                    field.getCell(i, j).setCellPassible(false);
                }
                else if (i == (field.getWidth() / 2 - 1) && j == (field.getHeight() / 2)){
                    field.getCell(i, j).setEvent(new Teleport(player, cnt, field));
                }
                else if(player.getHealth() < 0){
                    field.getCell(i, j).setEvent(new LoseEvent(player));
                    std::cout <<"LOSER!!";
                }
 
            } 
        }
    }
    if(lvl == 2)
        for(int i = 0; i <field.getHeight(); i++){
            for(int j = 0; j < field.getWidth(); j++){
                if ((i - j) % 9 == 0 && i % 8 == 0){
                    field.getCell(i, j).setEvent(new HealEvent(player));
                }
                else if ((i - j) % 4 == 0 && i % 1 == 0 && j % 2 == 0){
                    field.getCell(i, j).setEvent(new Enemy(player));
                }
                else if ((i + j) % 6 == 0 && i % 2 == 0){
                    field.getCell(i, j).setEvent(new Score(player));
                }
                else if ((i + j) % 3 == 0 && i % 2 == 0 && j % 6 == 0){
                    field.getCell(i, j).setEvent(nullptr);
                    field.getCell(i, j).setCellPassible(false);
                }
                else if (i == (field.getWidth() / 2 - 1) && j == (field.getHeight() / 2)){
                    field.getCell(i, j).setEvent(new Teleport(player, cnt, field));
                }
            } 
        }
}
