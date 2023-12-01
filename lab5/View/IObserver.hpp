#ifndef IObserver_h
#define IObserver_h
#include "EnumView.hpp"

class Observer
{
    
public:
    virtual void update(ViewEvent view_event) = 0;
    virtual ~Observer() {}
};


#endif