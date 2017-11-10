//
// Created by Rick on 09/11/2017.
//

#include "ui.h"

std::vector<int> inputcoord(int maxletters,int maxnumber){
    std::string input;
    std::vector<int> result(2);
    while (1>0){
        std::cout<<"Give a coordinate (example A1 or B34):"<<std::endl;
        getline(std::cin,input);

        //check if the input values are of the form x78
        if (input.size()==2) {
            if ((input[1] - '0') < 0 || (input[1] - '0') > 9) {
                std::cout<<"Second character not a number!"<<std::endl;
                continue;
            }
            result[1] = input[1] - '0' - 1;
        }else if (input.size()==3){

            if ((input[1] - '0')<0 || (input[1] - '0')>9 || (input[2] - '0')<0 || (input[2] - '0')>9) {
                std::cout<<"Second or third character not a number!"<<std::endl;
                continue;
            }
            result[1] = (input[1] - '0')*10 + (input[2]-'0') - 1;
            if (result[1]>(maxnumber-1)){
                std::cout<<"Number bigger than "<<maxnumber<<"!"<<std::endl;
                continue;
            }
        }else{
            std::cout<<"Wrong number of characters!"<<std::endl;
            continue;
        }

        switch (input[0]) {
            case 'A': case 'a': result[0] = 0;  break;
            case 'B': case 'b': result[0] = 1;  break;
            case 'C': case 'c': result[0] = 2;  break;
            case 'D': case 'd': result[0] = 3;  break;
            case 'E': case 'e': result[0] = 4;  break;
            case 'F': case 'f': result[0] = 5;  break;
            case 'G': case 'g': result[0] = 6;  break;
            case 'H': case 'h': result[0] = 7;  break;
            case 'I': case 'i': result[0] = 8;  break;
            case 'J': case 'j': result[0] = 9;  break;
            case 'K': case 'k': result[0] = 10;  break;
            case 'L': case 'l': result[0] = 11;  break;
            case 'M': case 'm': result[0] = 12;  break;
            case 'N': case 'n': result[0] = 13;  break;
            case 'O': case 'o': result[0] = 14;  break;
            case 'P': case 'p': result[0] = 15;  break;
            case 'Q': case 'q': result[0] = 16;  break;
            case 'R': case 'r': result[0] = 17;  break;
            case 'S': case 's': result[0] = 18;  break;
            case 'T': case 't': result[0] = 19;  break;
            case 'U': case 'u': result[0] = 20;  break;
            case 'V': case 'v': result[0] = 21;  break;
            case 'W': case 'w': result[0] = 22;  break;
            case 'X': case 'x': result[0] = 23;  break;
            case 'Y': case 'y': result[0] = 24;  break;
            case 'Z': case 'z': result[0] = 25;  break;
            default: std::cout<<"First character not a letter!"<<std::endl; continue;
        }
        if (result[0]<maxletters){
            return result;
        }else{
            std::cout<<"Give a letter earlier in the alphabet!"<<std::endl;
            continue;
        }
    }
}