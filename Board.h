/*
 * This is the class board with the following objects.
 * Objects:
 * Fleet fleet                          A fleet (containing ships)
 * int width                            width of the board          min 5 max 26 otherwise truncated
 * int length                           Length of the board         min 5 max 50 otherwise truncated
 * vector<vector<int>> hitpos           A boolean matrix. 0 is not chosen yet, 1 mis, 2 hit
 *
 * Constructor:
 * Board(int width,int length)          Creates a Board object with given length (5 to 50) and width (5 to 26)
 * Board()                              Creates a Board object with length 10 and width 10
 *
 * Functions:
 * sethitpos(int x,int y)               Changes a value in the boolean matrix to 1 (hit)
 * addShip(ship z)                      Add a ship to the vector of ships
 * setCoordinates(int shipnumber,       Sets the coordinates for every ship. Shipnumber is the number of the ship to be
 * std::vector<int> coordinates,        placed. Coordinates the first coordinate. orientation is 'h' for a boat in the
 * char orientation)                    horizontal direction and 'v' for a boat in the vertical direction starting
 *                                      at coordinates.
 *
 * int getlength()                      Get the length of the board
 * int getwidth()                       Get the width of the board
 * Fleet getfleet()                     Get a fleet (see fleet.h)
 * vector<vector<bool>> gethitpos()     Get a matrix with the positions that are hit
 */

#ifndef BATTLESHIPS_BOARD_H
#define BATTLESHIPS_BOARD_H
#include "Ship.h"
#include "Fleet.h"
#include <vector>
#include <iostream>

class Board {
private:
    Fleet fleet = Fleet();
    int width = 10;
    int length = 10;
    const int maxwidth = 26;
    const int minwidth = 5;
    const int maxlength = 50;
    const int minlength = 5;
    std::vector<std::vector<int>> hitpos;

    // the width and length are set at initialization and should not change afterwards, therefore these are private.
    void setwidth(int swidth);

    void setlength(int slength);

public:
    //constructors
    Board(int widthin, int lengthin);

    Board();

    //Getters
    int getwidth();

    int getlength();

    Fleet getfleet();

    std::vector<std::vector<int>> gethitpos();

    //Setters

    void addShip(Ship ship1);

    void sethitpos(int x, int y, int value);

    void setCoordinates(int shipnumber, std::vector<int> newCoordinates, char orientation);

};

#endif //BATTLESHIPS_BOARD_H
