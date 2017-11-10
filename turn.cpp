//
// Created by Rick on 10/11/2017.
//
#include "turn.h"
void turnplayer(Board &ai){
    int status = 0; //status int of shot for the while loop
    while (status==0) {//runs until a valid coordinate is received
        std::vector<int> coords = inputcoord(ai.getwidth(), ai.getlength());//ask for input coordinates
        status = shot(coords, ai); //run function shot to change object player and changes status
        if (status == 0){//if shot returns 0 there is an invalid coordinate given
            std::cout<<"No valid coordinate given!";
        }
    }
}
void turnai(){

}