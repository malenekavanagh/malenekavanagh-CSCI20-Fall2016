/* 
creator: Malene
date: 9/21/16
purpose: converts kilograms to pounds and pounds to kilograms

requirements must have: 
    ~ToKilos funtion that takes a value in pounds and returns the value in kilograms
    ~ToPounds function that takes a vale in kilograms and returns them in pounds
    ~use comments to identify the scope of all variables in your code
*/

#include <iostream>
using namespace std;

void ToKilos(){ 
    // this is going to convert lbs to kgs
    
    float kg1 = 0.0;
    float lb1 = 0.0;
    
    std::cout << "input an amount of pounds you want to convert to kilograms" << std::endl;
    std::cin >> lb1;
        
    kg1 = lb1 * (1/2.20);
        
    std::cout << lb1 << " pounds converts to " << kg1 << " kilograms" << std::endl;
        
}

void ToPounds() {
   
    float kg2 = 0.0;
    float lb2 = 0.0;    
        
    std::cout << "input an amount of kilograms you want to convert to pounds" << std::endl;
    std::cin >> kg2;
    
    lb2 = kg2 * 2.2;
    
    std::cout << kg2 << " kilograms converts to " << lb2 << " pounds" << std::endl;
    
}


int main()
{
   
    
    
    ToKilos();
    
    std::cout << " " << std::endl;
    
    ToPounds();
 
    
}