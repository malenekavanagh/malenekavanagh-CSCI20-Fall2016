/*
creator: malene kavanagh
date: 10/24/16
purpose: a menu that takes people's items

requirements
*/

#include <iostream>
using namespace std;

int main(){
  
  string menu [11] = {" ","grapes", "strawberries", "grapefruit", "bananas", "apples", "oranges", "coconuts", "limes", "kumquats", "smoothies"};
  std::cout << "You are able to have " << std::endl;
  string fruit;
  int item[11];
  int number[10] = {0};
  
  
  for(int i = 1; i < 11; ++i){
      std::cout << menu[i] << ", ";
  }
  std::cout<< " " <<std::endl;
  std::cout << "type in the item you want" << std::endl;
  std::cout << "type in done when you are finished" << std::endl;
  int c = 0;
  while(c < 10){
  
  std::cin >> fruit;  
  int b = 0;
  while(fruit != menu[b] && b < 10){
    b++;
  }
  
  if(fruit == menu[b]){
    std::cout << "how many would you like of these" << endl;
    std::cin >> item[b];
  number[c] = b;
  }
 
  
  else{
    c = 10;
  }
    c++;
  }
  std::cout<< "you got:" << std::endl;
  int f = 0;
   while(number[f] != 0){
  std::cout << item[number[f]] << " " << menu[number[f]] << endl;
  f++;
   }
}