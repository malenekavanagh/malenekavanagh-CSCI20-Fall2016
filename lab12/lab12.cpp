/*
Creator: Malene Kavanagh
Date: 10/10/2016 
Purpose: to recreate the if else animal flow chart

*/

#include <iostream>
using namespace std;

int main(){
    
    int useranswer;
    
    std::cout << "20 questions: quiz" << std::endl;
    std::cout << "Are you a potato? (1 = yes, 0 = no)" << std::endl;
    std::cin >> useranswer;
    
    switch (useranswer){
        case 1: 
            std::cout << "Are you a chip? (1 = yes, 0 = no)" << std::endl;
            std::cin >> useranswer;
            if(useranswer == 1){
                std::cout << "Are you fried? (1 = yes, 0 = no)" << std::endl;
                if(useranswer == 1){
                    std::cout << "You are a regular potato chip!" << std::endl;
                }
                else{
                    std::cout << "You are a baked potato chip!" << std::endl;
                }
            }
            else{
                std::cout << "Are you a couch? (1 = yes, 0 = no)" << std::endl;
                std::cin >> useranswer;
                if(useranswer == 1){
                    std::cout << "You are a couch potato!" << std::endl;
                }
                else{
                    std::cout << "You are mashed potatos!" << std::endl;
                }
            }
            
            break;
            
        case 0:
            
            std::cout << "You are a cow" << std::endl;
            std::cout << "Do you have four legs? (1 = yes, 0 = no)" << std::endl;
            std::cin >> useranswer;
            
            if(useranswer == 1){
                std::cout << "you are just a cow" << std::endl;
            }
            else{
                std::cout << "Do you have three legs? (1 = yes, 0 = no)" << std::endl;
                std::cin >> useranswer;
                if(useranswer == 1){
                    std::cout << "You are tri-tip!" << std::endl;
                }
                else{
                    std::cout << "Do you have two legs? (1 = yes, 0 = no)" << std::endl;
                    std::cin >> useranswer;
                    if(useranswer == 1){
                        std::cout << "You are lean beef!" << std::endl;
                    }
                    else{
                        std::cout << "Do you have one leg? (1 = yes, 0 = no)" << std::endl;
                        std::cin >> useranswer;
                        if(useranswer == 1){
                            std::cout << "You are steak!" << std::endl;
                        }
                        else{
                           std::cout << "Do you have no legs? (1 = yes, 0 = no)" << std::endl; 
                           std::cin >> useranswer;
                           if(useranswer == 1){
                               std::cout << "You are ground beef!" << std::endl;
                           }
                           else{
                               std::cout << "You jumped over a bardbed wire fence" << std::endl;
                               std::cout << "which was an utter disaster!" << std::endl;
                           }
                        }
                    }
                }
            }
            
            break;
        
        default:
        
            std::cout << "retry the program please" << std::endl;
            
            break;
    }
    }