/*
creator: Malene
Date: 10/19/16
pupose: make a random numbers guessing game

*/ 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Random{
    
    private:
        int user_min;
        int user_max;
        int rand_holder;
        
    public:
    
    Random(){        
       user_min = 0;
       user_max = 0;
               srand(time(0)); //seeds rand generator
        
        rand_holder = ((rand() % user_max) + user_min);
    }
    
    Random(int usermin,int usermax){      
        user_min = usermin;
        user_max = usermax;
        
        srand(time(0)); //seeds rand generator
        
        rand_holder = ((rand() % user_max) + user_min);
    }
    void setUserMinMax(int usermin, int usermax){
        user_min = usermin;
        user_max = usermax;
    }
    
    int getusermin(){
        return user_min;
    }
    int getusermax(){
        return user_max;
    }
    
    int getrand_holder(){
        return rand_holder;
    }
    
    
};

int main(){
    int user_max;
    int user_min;
    int rand_holder;
    int user_guess;
    
    std::cout << "we are going to play a numbers game" << std::endl;
    std::cout << "you are going to enter a minimum and a maximum then guess what number the random_a_fyier produced" << std::endl;
    
    std::cout << "enter  a minimum" << std::endl;
    std::cin >> user_min;
    
    std::cout << "enter a maximum" << std::endl;
    std::cin >> user_max;
    
    Random playGame(user_min, user_max);
    
    std::cout << "guess the number that was random_a_fyied" << std::endl;
    std::cin >> user_guess;
    
    int count;
    
    while(user_guess != playGame.getrand_holder()){
        
       if(user_guess < playGame.getrand_holder()){
           
           std::cout << "guess higher " << std::endl;
           std::cin >> user_guess;
       } 
       else {
           std::cout << "guess lower" << std::endl;
           std::cin >> user_guess;
       }
       count++;
    }
    
    std::cout << "You got it" << std::endl;
    std::cout << "it took you " << count << " tries" << std::endl;
}