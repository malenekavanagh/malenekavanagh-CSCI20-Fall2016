/*
creator: Malene Kavanagh
date:10/17/16
puporse: find the bugs in the code 

(Sum of numbers)
*/

#include <iostream>
using namespace std;

int main(){  
    
    // initialization 
    
    int num;       
    int sum = 0;   
    
    std::cout << "Enter numbers separated by spaces" << " and terminated with a negative number." << endl;
    
    // read first number  
    
    std::cin >> num;  
    
    while (num >= 0)  { 
        
            // add in to the sum
            sum = sum + num;
        
            // read in next number (getting ready for next loop test)  
        
            std::cin >> num; /*sum changed to num*/
    
    }
    
    std::cout << "Sum is " << sum << endl; // was changed to is
    
    return 0;
    
}