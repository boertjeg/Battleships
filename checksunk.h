/*
 * This funtion checks if a ship is sunk by checking every coordinate.
 * It returns a 0 if not sunk and a 1 if sunk.
 */

#ifndef BATTLESHIPS_CHECKSUNK_H
#define BATTLESHIPS_CHECKSUNK_H

#include "Ship.h"
#include "Board.h"

int checksunk(Ship ship,Board &board);
#endif //BATTLESHIPS_CHECKSUNK_H
