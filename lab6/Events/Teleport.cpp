#include "Teleport.h"


Teleport::Teleport(Player &player, Controller &cl, Field &fl) : FieldEvent(player, cl, fl){}

void Teleport::execute() {
    if(cl.getX() + 2 < fl.getWidth()){
        cl.setX(cl.getX() + 2);
    }
    if(cl.getY() + 2 < fl.getHeight()){
        cl.setY(cl.getY() + 2);
    }
}