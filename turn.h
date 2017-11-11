/*
 * turnplayer(Board &ai)
 * the function turnplayer(Board &ai) runs one turn in which the player is asked to give a coordinate.
 * If the coordinate is valid the board of the ai is updated. If the input is invalid the player is asked to input
 * another coordinate. No output of the result is given use PlotBoard for that.
 * Input:
 * &ai                                  A pointer to the board of the ai (which is changed)
 *
 * turnai(Board &player)
 */

#ifndef BATTLESHIPS_TURN_H
#define BATTLESHIPS_TURN_H
#include "Board.h"
#include "shot.h"
#include "ui.h"
#include <iostream>

void turnplayer(Board &ai);

void turnai(Board &player);

#endif //BATTLESHIPS_TURN_H
