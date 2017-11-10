/*
 * This function checks is a shot is possible and updates the board. Returns an integer depending on the result (see
 * output). It checks if the coordinate is not shot at before and gives an error (0) if it is shot at before.
 * The program then checks if it's a hit or a miss and if a ship is sunk. An integer is returned with the result.
 * This integer is shown in output.
 * The funtion inputcoord(int maxletter,int max number) can be used for user input for the coordinates.
 *
 * int shot(std::vector<int> cooord,Board &board)
 *
 * Input:
 * vector<int> coord(2)                 The coordinate shot at. Should be a vector of length 2.
 * Board &board                         The board that is shot at.
 *
 * Output:
 * 0                                    Error
 * 1                                    Miss
 * 2                                    Hit
 * 3                                    Sunk
 */

#ifndef BATTLESHIPS_SHOT_H
#define BATTLESHIPS_SHOT_H
#include <vector>
#include "Board.h"
#include <iostream>

int shot(std::vector<int> coord,Board &board);

#endif //BATTLESHIPS_SHOT_H
