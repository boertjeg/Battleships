//
// Created by Rick on 09/11/2017.
//

#ifndef BATTLESHIPS_SHIP_H
#define BATTLESHIPS_SHIP_H
#include <string>
#include <vector>
#include <iostream>

class Ship {
public:
    // constructor
    Ship();
    Ship(int type);
    //member function
    int getLength();
    std::string getName();
    //coordinates
    void setCoordinates(std::vector<int> newCoordinates, char orientatation);
    std::vector<std::vector<int> > getCoordinates();

private:
    //member data
    std::vector<std::vector<int> > coordinates;
    std::string name;
    int shipLength;
};

#endif //BATTLESHIPS_SHIP_H
