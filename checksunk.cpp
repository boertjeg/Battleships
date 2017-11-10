//
// Created by Rick on 09/11/2017.
//

#include "checksunk.h"

int checksunk(Ship ship,Board &board){
    int sunk = 1;                                    //Set sunk to true
    for (int i=0;i<ship.getLength();i++){            //check every coordinate of ship
        int x = ship.getCoordinates()[i][0];
        int y = ship.getCoordinates()[i][1];
        if (board.gethitpos()[x][y]==0){             //if a coordinate of a ship is not sunk => sunk = false
            sunk = 0;
        }
    }
    if (sunk == 1){                                  //if a ship is sunk for all coordinates of the ship hitpos is
        for (int j=0;j<ship.getLength();j++){        //set to 3
            board.sethitpos(ship.getCoordinates()[j][0],ship.getCoordinates()[j][1],3);
        }
    }
    return sunk;
}