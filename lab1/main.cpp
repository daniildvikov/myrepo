#include <iostream>
#include "player.hpp"
#include "playercontroller.hpp"
#include "gamefield.hpp"
int main() {
    try {
        Gamefield gamefield(10,10);
        gamefield.getCell(2,0).setCellPassible(false);
        Player player(50, 0);
        Playercontroller controller(player, gamefield);
        controller.move(Direction::DOWN);
        controller.move(Direction::DOWN);
        controller.showCoords();
        controller.stats();
        gamefield.printField();
    } catch (const std::runtime_error& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}