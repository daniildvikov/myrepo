#ifndef GameObserver_h
#define GameObserve_h

#include "IView.hpp"
#include "IObserver.hpp"
#include <iostream>
#include "../Game/Game.hpp"
#include "EnumView.hpp"
#include <unordered_map>
#include <iostream>
#include <functional>
#include <unordered_map>

class GameObserver: public Observer
{
    Game* game;
    IView* view;
    public:
        GameObserver(Game* game, IView* view);
        void update(ViewEvent view_event) override;

};


#endif