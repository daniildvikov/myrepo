#include "../player.hpp"
#ifndef EVENT_H
#define EVENT_H

class Event{
public:
    virtual void triggerEvent() = 0;
    virtual ~Event() = default;

};

#endif