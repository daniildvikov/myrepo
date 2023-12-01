#include "Teleport.hpp"

Teleport::Teleport(Player &player, Playercontroller &cnt, Gamefield &field) : FieldEvent(player, cnt, field){}
void Teleport::triggerEvent() {
    int x = cnt.getX();
    int y = cnt.getY();
    int newX = x + 5 < field.getWidth() ? x + 5 : field.getWidth() - 1;
    int newY = y + 5 < field.getHeight() ? y + 5 : field.getHeight() - 1;

    if (field.getCell(newX, newY).getCellPassible()) {
        cnt.setX(newX);
        cnt.setY(newY);
    } else if (field.getCell(newX, y).getCellPassible()) {
        cnt.setX(newX);
    } else if (field.getCell(x, newY).getCellPassible()) {
        cnt.setY(newY);
    }
 
}