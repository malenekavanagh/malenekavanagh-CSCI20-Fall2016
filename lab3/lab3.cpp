/*
creator: Malene Kavanagh
date: 8/31/16
Purpose: the CoinStar machine 
*/

/*
this program is supposed to emulate a coinstar machine 
it determines how many quarters, dimes, nickles, and pennies you provide
it determines how much you earn in dollars and cents.
it also takes 10.9% fee. then outputs the cash voucher
*/

#include <iostream>
using namespace std;

int main(){
    
    int cents = 0;
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;
    double dollars = 0.0;
    double taxed = 0.0;
    
    std::cout << "Enter an ammount of cents you have" << std::endl;
    std::cin >> cents;
    
    std::cout << "You entered ";
    std::cout << cents;
    std::cout << " cents." << std::endl;
    
    dollars = cents/100.00;
    
    
    quarters = cents/25;
    cents = cents%25;
    dimes = cents/10;
    cents = cents%10;
    nickles = cents/5;
    cents = cents%5;
    pennies = cents/1;
    
    std::cout << "you have " << std::endl;
    std::cout << quarters << " quarters." << std::endl;
    std::cout << dimes << " dimes" << std::endl;
    std::cout << nickles << " nickles" << std::endl;
    std::cout << pennies << " pennies" << std::endl;
    
    std::cout << "you have $" ;
    std::cout << dollars << std::endl;
    
    taxed = dollars-(dollars/10.9);
    
    std::cout << "This is your total after tax $" << taxed << "." << std::endl;
    
}