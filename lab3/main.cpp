#include <iostream>
#include "player.hpp"
#include "playercontroller.hpp"
#include "Field/gamefield.hpp"
#include "Field/FieldBuilder.hpp"
int main() {
    try {
        Gamefield gamefield(30,30);
        gamefield.getCell(3,0).setCellPassible(false);
        Player player(0, 0);
        Playercontroller controller(player, gamefield);
        FieldBuilder fb(gamefield, player, controller);
        fb.buildField(2); // lvl 1 or 2
        controller.move(Direction::RIGHT);
        controller.move(Direction::RIGHT);
        controller.move(Direction::RIGHT);
        controller.move(Direction::RIGHT);
        controller.move(Direction::DOWN);
        controller.move(Direction::DOWN);
        controller.move(Direction::RIGHT);
        controller.showCoords();
        controller.stats();
        std::cout << gamefield.getStart().first << " " << gamefield.getStart().second << " START\n";
        std::cout << gamefield.getExit().first << " " << gamefield.getExit().second << " FINISH\n";
        controller.printField();
        controller.Win();
        controller.Lose();
    } catch (const std::runtime_error& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}