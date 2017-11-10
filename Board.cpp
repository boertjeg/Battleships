//
// Created by Rick on 08/11/2017.
//

#include "Board.h"
//constructor
Board::Board(int widthin, int lengthin){
    setwidth(widthin);
    setlength(lengthin);
    hitpos.resize(width,std::vector<int>(length,0));
};
Board::Board(){
    setwidth(10);
    setlength(10);
    hitpos.resize(width,std::vector<int>(length,0));
}

//Getters
int Board::getwidth(){
    return width;
}
int Board::getlength(){
    return length;
}
Fleet Board::getfleet(){
    return fleet;
}
std::vector<std::vector<int>> Board::gethitpos(){
    return hitpos;
}

//Setters
void Board::setwidth(int swidth) {
    if (swidth<minwidth) {
        std::cout<<"width of the board is set to 5!"<<std::endl;
        width = minwidth;
    }
    else if (swidth>maxwidth){
        std::cout<<"width of the board is set to 50!"<<std::endl;
        width = maxwidth;
    }
    else{
        width = swidth;
    }
};
void Board::setlength(int slength) {
    if (slength<minlength) {
        std::cout<<"width of the board is set to 5!"<<std::endl;
        length = minlength;
    }
    else if (slength>maxlength){
        std::cout<<"width of the board is set to 50!"<<std::endl;
        length = maxlength;
    }
    else{
        length = slength;
    }
};

void Board::addShip(Ship ship1){
    fleet.addShip(ship1);
}



void Board::sethitpos(int x, int y,int value) {
    if (value == 0 || value == 1 || value == 2 || value == 3) {
        hitpos[x][y] = value;
    }else{
        std::cout<<"Input value of sethitpos is not of the correct value!";
    }
}

void Board::setCoordinates(int shipnumber, std::vector<int> newCoordinates, char orientation) {
    fleet.setCoordinates(shipnumber,newCoordinates,orientation);
}



