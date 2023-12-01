#ifndef cell_hpp
#define cell_hpp
#include "../events/Event.hpp"
class Cell
{
private:
    bool cellPassible;
    Event* event;
public:
    Cell(bool cellPasible = true, Event* event = nullptr);
    
    bool getCellPassible() const;
    
    void setEvent(Event * event);

    Event* getEvent() const;
    
    void setCellPassible(bool cellPassible);
};

#endif