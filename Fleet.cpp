//
// Created by User on 9-11-2017.
//

#include "Fleet.h"

Fleet::Fleet(){}

void Fleet::addShip(Ship newShip) {
    ships.push_back(newShip);
}

void Fleet::setCoordinates(int shipnumber,std::vector<int> newCoordinates, char orientation){
    ships[shipnumber].setCoordinates(newCoordinates,orientation);
}

std::vector<Ship> Fleet::getShips() {
    return ships;
}
