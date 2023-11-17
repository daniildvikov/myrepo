#include <iostream>
#include "player.hpp"
#include "playercontroller.hpp"
#include "Field/gamefield.hpp"
#include "Field/FieldBuilder.hpp"
#include "Game/Game.hpp"
int main() {
    try {
        Game game;
        game.startGame();
        // Gamefield gamefield(10,10);
        // gamefield.getCell(3,0).setCellPassible(false);
        // Player player(0, 0);
        // Playercontroller controller(player, gamefield);
        // FieldBuilder fb(gamefield, player, controller);
        // fb.buildField(2); // lvl 1 or 2
        // controller.startGame();
        // controller.printField();
        // controller.showCoords();
        // controller.stats();
        // std::cout << gamefield.getStart().first << " " << gamefield.getStart().second << " START\n";
        // std::cout << gamefield.getExit().first << " " << gamefield.getExit().second << " FINISH\n";
        // controller.printField();
    } catch (const std::runtime_error& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }

    return 0;
}