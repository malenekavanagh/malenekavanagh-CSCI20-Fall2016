/*
Creator: Malene Kavanagh
Date: 8/29/16
Purpose: the Madlibs lab
*/

/* 
This program is supposed to run a mad libs paragraph 
with a integer, floating point, character and string
*/

#include <iostream>
using namespace std;

int main(){
   
    string adjetive = "";
    string verb = "";
    string verb2 = "";
    string plural_noun = "";
    string noun = "";
    
    float Fraction = 0.0;
    int Whole = 0;
    
    char symbol ;
    
    std::cout << "Enter a noun" << std::endl;
    std::cin >> noun;
    
    std::cout << "Enter a plural noun" << std::endl;
    std::cin >> plural_noun;
    
    std::cout << "Enter an adjetive" <<std::endl;
    std::cin >> adjetive;
    
    std::cout << "Enter a verb ending in ing" << std::endl;
    std::cin >> verb;
    
    std::cout << "Enter a crazy verb" <<std::endl;
    std::cin >> verb2;
    
    std::cout << "Enter a whole number" << std::endl;
    std::cin >> Whole;
    
    std::cout << "Enter a decimal number" << std::endl;
    std::cin >> Fraction;
    
    std::cout << "Enter a symbol" << std::endl;
    std::cin >> symbol;
    
    std::cout << "There once was a boy ";
    std::cout << noun;
    std::cout << " who was a very ";
    std::cout << adjetive;
    std::cout << " ";
    std::cout << noun ;
    std::cout <<"."<< std::endl;
    std::cout << "He ran around " + verb +  " the other " + noun << std::endl;
    std::cout << "One day he saw a pretty girl " + noun + " who was kind and nice."<< std::endl;
    std::cout << "Boy " + noun + " changed his ways." << std::endl;
    std::cout << "Boy " + noun + " decided to get ";
    std::cout << Whole;
    std::cout << " " ;
    std::cout << symbol;
    std::cout << " for the girl " + noun << std::endl;
    std::cout << "Girl " + noun + " wanted ";
    std::cout << Fraction;
    std::cout << " " +plural_noun + " instead."<< std::endl;
    std::cout << "Boy " + noun + " got girl " + noun + " what she wanted " << std::endl;
    std::cout << "Suddenly they decided to " + verb2 + " a city." << std::endl;
    std::cout << "The End." << std::endl;
    
    /* 
    paragraph not in code: 
    There once was a boy turtle who was a very silly turtle. 
    He ran around scaring the other turtles
    one day he saw a pretty girl turtle who was kind and nice.
    boy turtle changed his ways.
    boy turtle decided to get 9 * for the girl turtle
    girl turtle wanted 2.5 candies instead.
    boy turtle got girl turtle what she wanted.
    suddenly they decided to burn down a city.
    */
}
