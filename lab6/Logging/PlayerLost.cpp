#include "PlayerLost.h"

PlayerLost::PlayerLost(Controller &controller) : controller(controller){}

void PlayerLost::print(std::ostream& os) const {
    os << "Player lost on position  [" << controller.getX() << " , " << controller.getY() << "]" << std::endl;
}