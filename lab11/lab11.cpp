/*
creator: Malene Kavanagh
date: 10/5/2016
purpose: to do the math on the taxes

requirements: at least one if/else statement
    output:
        name
        total gross adjusted income
        total tax owed
        name is entitled to a Refund of $x
*/

#include <iostream>
using namespace std;

int main() {
    
    string username = "";
    string status = "";
    
    
    std::cout << "Enter your first and last name" << std::endl;
    std::getline(cin, username);
    
    std::cout << "Now enter your marital status (single or married)" << std::endl;
    std::cin >> status ; 
    
    int wage = 0;
    int withheld = 0;
    double nonexemption = 0.0;
    double holdVal = 0.0;
    double tax = 0.0;
    double refund = 0.0;
    
    if(status == "single"){
        
        std::cout << "Enter your Wage" << std::endl;
        std::cin >> wage;
        
        std::cout << "Enter your Withheld" << std::endl;
        std::cin >> withheld;
        
        nonexemption = wage - 3900 - 6100;
        
        if (nonexemption >= 0 && nonexemption <= 8925){
            
            tax = nonexemption * .10;
            
            
        }
        
        else if(nonexemption >= 8926 && nonexemption <= 36250){
            
            tax = ((nonexemption - 8925) * .15) + 892.50;
            
            
        }
        
        else if(nonexemption >= 36251 && nonexemption <= 87850){
            
            tax = ((nonexemption - 36250) * .25) + 4991.25;
            
        }
        else if (nonexemption >= 87851){
            
            tax = ((nonexemption - 87850) * .28) + 17891.25;
        }
        else{
            std::cout << "you have no money to be taxed" << std::endl;
        }
        
    }
    
    else if(status == "married"){
        
        std::cout << "Enter your Wage" << std::endl;
        std::cin >> wage;
        
        std::cout << "Enter your withheld" << std::endl;
        std::cin >> withheld;
        
        nonexemption = wage - (3900 * 2) - (6100 * 2);
        
        if(nonexemption >= 0 && nonexemption <= 17850){
            
            tax = nonexemption * .10;
        }
        
        else if(nonexemption >= 17851 && nonexemption >= 72500){
            
            tax = ((nonexemption - 17850) * .15) + 1785;
        }
        
        else if(nonexemption >= 72501){
            tax = ((nonexemption - 72500) * .28) + 9982.50;
        }
    }
    
    else{
        std::cout << "Sorry didn't catch what you typed. Try again." << std::endl;
    }
    
    if(tax > withheld){
        
        holdVal = tax - withheld;
        refund = withheld - tax;
    }
    else if(tax < withheld){
        
        holdVal = tax - withheld;
        refund = withheld - tax;
        
    }
    else{
        holdVal = 0;
        refund = 0;
    }
    
    std::cout << "Name: " << username << std::endl;
    std::cout << "Total Gross Adjusted Income: $" << nonexemption <<std::endl;
    std::cout << "Total tax owed: $" << holdVal << std::endl;
    std::cout << username <<" is entitled to a refund of $" << refund << std::endl;
}