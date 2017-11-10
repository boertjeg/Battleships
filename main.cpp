#include <iostream>

#include "board.h"
//# include "Ship.h"
#include <vector>
#include <string>
#include "ui.h"
#include "PlotBoard.h"
#include "shot.h"

int main() {
    Board board1 = Board();
    board1.addShip(Ship(4));
    board1.setCoordinates(0,inputcoord(10,10),'h');

    while (0<1) {
        PlotBoard(board1.gethitpos());
        std::cout<<shot(inputcoord(10,10),board1)<<std::endl;
    }

    return 0;
}