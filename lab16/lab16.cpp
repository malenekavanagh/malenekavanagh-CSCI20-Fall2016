/*
creator: malene kavanagh
date: 10/31/16
purpose: a menu that takes people's items
now with price and inventory

requirements:
declare a price array
when user chooses an item out put he price of the item and the inventory
subtract from inventory
create a total for inventory
output total cost when done
use parallel arrays
*/

#include <iostream>
using namespace std;

int main(){
  
  string menu [11] = {" ","grapes", "strawberries", "grapefruit", "bananas", "apples", "oranges", "coconuts", "limes", "kumquats", "smoothies"};
  std::cout << "You are able to have " << std::endl;
  string fruit;
  int take[11] = {0};
  int item[11] = {0, 20, 17, 5, 32, 26, 9, 2, 13, 51, 3};
  double price[11] = {0.0, 1.99, 2.51, 3.11, 1.65, 0.99, 2.48, 4.51, 0.99, 0.25, 3.25};
  int number[10] = {0};
  double total = 0.0;
  
  
  for(int i = 1; i < 11; ++i){
      std::cout << "$" << price[i] << " for " << menu[i] << " " << item[i] << " in stock" << std::endl;
  }
  std::cout<< " " <<std::endl;
  std::cout << "type in the item you want" << std::endl;
  std::cout << "type in done when you are finished" << std::endl;
  int c = 0;
  while(c < 10){
  
  std::cin >> fruit;  
  int b = 0;
  while(fruit != menu[b] && b < 11){
    b++;
  }
  
  if(fruit == menu[b]){
    std::cout << "how many would you like of these" << endl;
    std::cin >> take[b];
    
    if(take[b]<= item[b] && take[b] > 0){
        item[b] = item[b] - take[b];
        std::cout << menu[b] << " " << item[b] << " in stock now" << std::endl;
    }
    else{
        std::cout << "you didn't enter a valid number" << std::endl;
    }
  number[c] = b;
  total = total + (price[b] * take[b]);
  }
 
  
  else{
    c = 10;
  }
    c++;
  }
  
  std::cout<< "you got:" << std::endl;
  int f = 0;
   while(number[f] != 0){
  std::cout << take[number[f]] << " " << menu[number[f]] << endl;
  f++;
   }
   std::cout << "that is a total of $" << total << std::endl;
}