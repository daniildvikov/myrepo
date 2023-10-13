#include <iostream>
#include "cell.hpp"

Cell::Cell(bool cellPassible){
    this->cellPassible = cellPassible;
}

bool Cell::getCellPassible() const{
    return this->cellPassible;
}

void Cell::setCellPassible(bool cellPassible){
    this->cellPassible = cellPassible;
}
