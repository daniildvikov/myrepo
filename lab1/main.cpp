#include <iostream>
#include "player.h"
#include "playercontroller.h"

int main() {
    try {
        Player player(50, 0);
        Playercontroller controller(player);
        controller.move(Direction::UP);
        controller.move(Direction::UP);
        controller.showCoords();
        controller.stats();
    } catch (const std::runtime_error& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}