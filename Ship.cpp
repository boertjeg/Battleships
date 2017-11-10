#include "Ship.h"

Ship::Ship(int type) {
    switch(type){
        case 1:
            shipLength=2;
            name="Destroyer";
            break;
        case 2:
            shipLength=3;
            name="Submarine";
            break;
        case 3:
            shipLength=3;
            name="Cruiser";
            break;
        case 4:
            shipLength=4;
            name="Battleship";
            break;
        case 5:
            shipLength=5;
            name="Carrier";
            break;
        default:
            shipLength=1;
            name="Default ship";
            break;
    }
}

//member function
int Ship::getLength() {
    return shipLength;
}

std::string Ship::getName() {
    return name;
}

void Ship::setCoordinates(std::vector<int> newCoordinates, char orientatation) {
// create vector of length of ship containing vectors of length 2 with int values for x and y coordinate
    std::vector<std::vector<int> > coord(shipLength, std::vector<int>(2));
    if(orientatation == 'h'){
        for(int i=0;i<shipLength;++i){
            // x coordinate
            coord[i][0]= newCoordinates[0]+i;
            // y coordinate
            coord[i][1]= newCoordinates[1];
        }
    }
    else if(orientatation == 'v'){
        for(int i=0;i<shipLength;++i){
            // x coordinate
            coord[i][0]= newCoordinates[0];
            // y coordinate
            coord[i][1]= newCoordinates[1]+i;
        }
    }
    else{
        std::cout<<"Second argument of setCoordinates should be v or h"<<std::endl;
        return;
    }
    coordinates=coord;
}

std::vector<std::vector<int> > Ship::getCoordinates() {
    return coordinates;
}

Ship::Ship() {}
