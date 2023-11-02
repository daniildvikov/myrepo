#include <iostream>
#include "cell.hpp"

Cell::Cell(bool cellPassible, Event *event){
    this->cellPassible = cellPassible;
    this->event = event;
}

bool Cell::getCellPassible() const{
    return this->cellPassible;
}

void Cell::setCellPassible(bool cellPassible){
    this->cellPassible = cellPassible;
}

void Cell::setEvent(Event *event) {
    this->event = event;
}

Event* Cell::getEvent() const {
    return event;
}