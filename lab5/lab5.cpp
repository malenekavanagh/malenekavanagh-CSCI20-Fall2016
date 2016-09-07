/*
Creator: Malene Kavanagh
Date: 9/7/16
Purpose: Monster Objects

This program is suposed to create a Monster Struct and 4 monster objects

requirements at least one struct
4 monster objects
input variables for one monster out put all of the monster data

*/

#include <iostream>
using namespace std;

struct Monster{    //the struct
    string name;
    string head;
    string eyes;
    string nose;    //objects
    string ears;
    string mouth;
};

int main() {
    Monster bacon; //input and output for user
    
    std::cout<< "Monster One:" << std::endl;
    
    std::cout<< "Name: Enter a name for the monster" << std::endl;
    std::cin>> bacon.name;
    
    std::cout<< "Head: type one of these words zombus, frankin, happy" << std::endl;
    std::cin>> bacon.head;
    
    std::cout<< "Eyes: type one of these words vegitas, wackus, spirtem, none" << std::endl;
    std::cin>> bacon.eyes;
    
    std::cout<< "Nose: type one of these words vegitas, wackus, spirtem, none" << std::endl;
    std::cin>> bacon.nose;
    
    std::cout<< "Ears: type one of these words vegitas, wackus, spirtem, none" << std::endl;
    std::cin>> bacon.ears;
    
    std::cout<< "Mouth: type one of these words vegitas, wackus, spirtem, none" << std::endl;
    std::cin>> bacon.mouth;
    
    
    std::cout<< bacon.name << " has:" << std::endl;
    std::cout<< bacon.head << " type of head" << std::endl;
    std::cout<< bacon.eyes << " type of eyes" << std::endl;
    std::cout<< bacon.nose << " type of nose" << std::endl;
    std::cout<< bacon.ears << " type of ears" << std::endl;
    std::cout<< bacon.mouth << " type of mouth" << std::endl;
    std::cout<< "and that is the monster";
    
}