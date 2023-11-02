#include "Teleport.hpp"

Teleport::Teleport(Player &player, Playercontroller &cnt, Gamefield &field) : FieldEvent(player, cnt, field){}
void Teleport::triggerEvent() {
    if (field.getCell(cnt.getX() + 2, cnt.getY() + 2).getCellPassible()) {
        cnt.setX(cnt.getX() + 2);
        cnt.setY(cnt.getY() + 2);
    } else if (field.getCell(cnt.getX() + 2, cnt.getY()).getCellPassible()) {
        cnt.setX(cnt.getX() + 2);
    } else if (field.getCell(cnt.getX(), cnt.getY() + 2).getCellPassible()) {
        cnt.setY(cnt.getY() + 2);
    }
 
}