/*
Creator: Malene Kavanagh
Date: 11/2/2016
pourpose:create a program that simulates a username creator

requirements:
   - use only c strings
inputs:
 - Your Name
 - April Browne
 - AnaElizabeth Hazletine-Smith
 - James James
*/

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
   char firstName[11] = {'\0'};
   char lastName[21] = {'\0'};
   std::cout << "enter first name less than 10 characters" << std::endl;
   std::cin >> firstName;
   
   for(int i = 0; firstName[i] != '\0'; i++){
      
      if(firstName[10] != '\0'){
      std::cout << "name is too large" << std::endl;
      return 0;
   }}
    
   std::cout << "enter last name less than 20 characters" << std::endl;
   std::cin >> lastName;
   
   
   for(int i = 0; lastName[i] != '\0'; i++){
      int t;
      t = memcmp(firstName,lastName,10);
      if(t==0){
         std::cout << "can't have the same name" << std::endl;
         return 0;
      }
      if(lastName[20] != '\0'){
         std::cout << "name is too large " << std::endl;
         return 0;
      }
     
   }
   
   std::cout << "Name: ";
   for(int a = 0; firstName[a] != '\0'; a++){
      std::cout << firstName[a];
   }
   std::cout << " ";
   
   for(int b = 0; lastName[b] != '\0'; b++){
      std::cout << lastName[b];
   }
   std::cout << " " << std::endl;
   std::cout << "These are some of your possible usernames" << std::endl;
   for(int c = 0; c < 11; c++){
      tolower(firstName[c]);
   }
   for(int d = 0; d < 21; d++){
      tolower(lastName[d]);
   }
   
   std::cout << firstName[0] << firstName[1];
   
   for(int e = 0; lastName[e] != '\0'; e++){
      std::cout << lastName[e];
   }
   std::cout << " " << std::endl;
   
   for(int f = 0; firstName[f] != '\0'; f++){
      std::cout << firstName[f];
   }
   for(int g = 0; lastName[g] != '\0'; g++){
      std::cout << lastName[g];
   }
   std::cout << " " << std::endl;
   if(firstName[0] != '\0' && firstName[1] != '\0' && firstName[2] != '\0'){
   std::cout << firstName[0] << firstName[1] << firstName[2];
   
   for(int h = 0; lastName[h] != '\0'; h++){
      std::cout << lastName[h];
   }}
   
}