/*
 * This function checks is a shot is posible and updates the board. Returns 0 if everything when ok otherwise 1
 * The function updates the hitpos of the board. It checks if the position is not shot at before and if there is a
 * ship there and updates hitpos accordingly.
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
