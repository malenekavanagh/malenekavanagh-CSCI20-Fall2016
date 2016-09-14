/*
creator: Malene Kavanagh 
date: 9/12/16
purpose: finding the wages for a person

needs:
at least 3 variables
at least one equation
input and output
header comments
embeded comments based on pseudocode
*/

#include <iostream> 
using namespace std;

int main(){
    int hours;       // these are the variables
    float hour_wage;
    int week_days = 5;
    float week_wage;
    float extra_var;
    float taxes = 0.17;
    float taxed_money;//taxed variable = net pay
    
    //the other variables
    string name;
    float daily_rate; //what you get in a day
    
    // these will aquire the variables needed
    
    std::cout << "input a name" << std::endl;
    std::getline(cin, name);
    
    std::cout << "input wage per hour" << std::endl;
    std::cin >> hour_wage;
    
    std::cout << "input number of working hours" << std::endl;
    std::cin >> hours;
    
    //calculating hours, rate, gross pay, and net pay
    
    daily_rate = (hours * hour_wage);
    week_wage = (daily_rate) * week_days; //this is the equation used
    extra_var = week_wage * taxes;
    taxed_money = week_wage - extra_var;
    
    // wage slip : name, hours, daily rate, gross pay(for a week), and net pay(taxed gross pay)
   
   std::cout << "Wage Slip" << std::endl;
   std::cout << "Name: " << name << std::endl;
   std::cout << "Hours per day: " << hours << std::endl;
   std::cout << "Daily rate: $" << daily_rate << std::endl;
   std::cout << "Gross pay for the week: $" << week_wage << std::endl;
   std::cout << "Taxed 17%" << std::endl;
   std::cout << "Net pay for the week: $" << taxed_money << std::endl;
}