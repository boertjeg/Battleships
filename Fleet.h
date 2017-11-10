//
// Created by Rick on 09/11/2017.
//

#ifndef BATTLESHIPS_FLEET_H
#define BATTLESHIPS_FLEET_H

#include "Ship.h"

class Fleet: public Ship {
public:
    // constructors
    Fleet();
    //methods
    void addShip(Ship newShip);
    std::vector<Ship> getShips();
    void setCoordinates(int shipnumber,std::vector<int> newCoordinates, char orientation);
private:
    std::vector<Ship> ships;
};

#endif //BATTLESHIPS_FLEET_H
