#include "PlotBoard.h"

//Function
void PlotBoard(std::vector<std::vector<int> > coord)
{
    char sign;                  //used to give a sign to a certain coordinate
    int w = coord.size();       //determines the width of given board
    int h = coord[0].size();    //determines the height of given board
    std::string xaxis = "  |A|B|C|D|E|F|G|H|I|J|K|L|M|N|O|P|Q|R|S|T|U|V|W|X|Y|Z|";
    std::string yaxis = " 1| 2| 3| 4| 5| 6| 7| 8| 9|10|11|12|13|14|15|16|17|18|19|20|21|22|23|24|25|26|";
    std::string signs = "_OX*";                                    //_empty coordinate, O = missed, X = hit, S = sunk

    std::cout << xaxis[1];                                              //display the first row (the x axis)
    for (int i=0; i<=w; i++)                                            //for-loop displays # of y axis + row[i]
    {
        std::cout << xaxis[i*2+1] << xaxis[i*2+2];
    }
    std::cout << std::endl;
    for (int j=0; j<h; j++)                                             //for-loop displays value j of row[i]
    {
        std::cout << yaxis[j*3] << yaxis[j*3+1] << yaxis[j*3+2];
        for (int i=0; i<w; i++)
        {
            if (coord[i][j] == 0)                                       //depending on value coord[i][j], the correct sign is outputted
            {
                sign = signs[0];
            }
            else if (coord[i][j] == 1)
            {
                sign = signs[1];
            }
            else if (coord[i][j] == 2)
            {
                sign = signs[2];
            }
            else if (coord[i][j] == 3)
            {
                sign = signs[3];
            }
            std::cout << sign << "|";                                   //closes the last coordinate with an |
        }
        std::cout << std::endl;
    }
}