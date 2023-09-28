#include "controller/playercontroller.h"
#include "player/player.h"
#include <iostream>

int main(){
    try
    {
        playercontroller *controller = new playercontroller(*new Player(200, 2));
    }
    catch (...)
    {
        std::cout << "Wrong data!" << std::endl;
    }


}

