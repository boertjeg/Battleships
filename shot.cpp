//
// Created by Rick on 09/11/2017.
//
#include "shot.h"
#include "checksunk.h"

int shot(std::vector<int> coord,Board &board){
    if (coord.size()!=2){                                       //check if there are two coordinates
        std::cout<<"The coordinates entered into shot() are not of the right vector size!";
        return 0;
    }else if (board.getwidth()<coord[0] || coord[0]<0 || board.getlength()<coord[1] || coord[1]<0 ){
        std::cout<<"The coordinates are not on the board";      //check if coordinate is on the board
        return 0;
    }else if (board.gethitpos()[coord[0]][coord[1]]!=0){        //check if the coordinate is not already shot
        std::cout<<"The coordinate is already shot at!";
        return 0;
    }else{


        board.sethitpos(coord[0],coord[1],1);                   //set hitpos to 1 meaning a miss
        for (int i=0;i<board.getfleet().getShips().size();i++){ //check every ship
            for (int j=0;j<board.getfleet().getShips()[i].getLength();j++){//check all ships coordinates
                if (board.getfleet().getShips()[i].getCoordinates()[j]==coord){//check if ship and shot coord. are equal
                    board.sethitpos(coord[0],coord[1],2);       //change hitpos to 2 meaning a hit
                    int sunk = checksunk(board.getfleet().getShips()[i],board);    //check if the ship is sunk
                    if (sunk==0){
                        return 2; //not sunk
                    }else{
                        return 3; //sunk
                    }
                }
            }
        }
        return 1; //miss
    }

}
