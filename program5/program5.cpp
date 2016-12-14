/*
creator: Malene Kavanagh
Date: 12/5/16

requirements:
~ a class
~ a decision or loop(or both)
~ an array or strings(or both)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class countPoints{
  private:
  int winPoints;
  public:
  void SetPoints(int points);
  int GetTacPoints();
  int GetRandPoints();
};
void countPoints::SetPoints(int points){
  winPoints = points;
}
int countPoints::GetTacPoints(){
  winPoints = winPoints * 3;
  return winPoints;
}
int countPoints::GetRandPoints(){
  winPoints = 50 - winPoints;
  return winPoints;
}


int main() {
  countPoints points; // making a class object
  srand(time(0));
  string userChoice;
  int numGuesses;
  int gameWins;
  string gameNames;
  std::cout << "play either tic-tac-toe or a number guessing game" << std::endl;
  std::cout << "type either tictactoe or numbers" << std::endl;
  std::cin >> gameNames; //getline(cin, gameNames); get line code not needed
  
  if(gameNames == "numbers" || gameNames == "Numbers"){ //rnad numbers + instuctions on how to play
  int Num;
  int userNum;
  int tries = 0;
  Num =((rand()% 50) + 0);
  std::cout << "guess a number between 0 and 50" << std::endl;
  std::cin >> userNum;
  tries++;
  while(userNum != Num){
    if(userNum > Num){
      std::cout << "guess lower" <<std::endl;
      std::cin >> userNum;
    }
    else if(userNum < Num){
      std::cout << "guess higher " << std::endl;
      std::cin >> userNum;
    }
    tries++;
  }
    if(userNum == Num){
      points.SetPoints(tries);
      std::cout << "you won it took you " << tries << std::endl;
      std::cout << "you got " << points.GetRandPoints() << " points" << std::endl;
    }
  }
  if(gameNames == "tictactoe" || gameNames == "Tictactoe" || gameNames == "TicIacToe"){
    char tic_tac_toe[3][3] = {' '};
    std::cout << "you play three rounds  then you get your points for how many times you won" << std::endl;
    std::cout << "the spaces are numbered 1-3 for coloum first and 1-3 for the rows second" << std::endl;
    int turn = 0;
    int timesWon = 0;
    int coloum;
    int row;
    int I = 0;
      
    while(I < 9 && timesWon == 0){
      int num1;
      int num2;
      //this checks if they won
      // if((tic_tac_toe[0][0] == 'O' && tic_tac_toe[1][0] == 'O' && tic_tac_toe[2][0] == 'O') || (tic_tac_toe[0][1] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][1] == 'O') || (tic_tac_toe[0][2] == 'O' && tic_tac_toe[1][2] == 'O' && tic_tac_toe[2][2] == 'O') || (tic_tac_toe[0][0] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][2] == 'O') || (tic_tac_toe[0][2] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][0] == 'O') || (tic_tac_toe[0][0] == 'O' && tic_tac_toe[0][1] == 'O' && tic_tac_toe[0][2] == 'O') || (tic_tac_toe[0][1] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][1] == 'O') || (tic_tac_toe[0][2] == 'O' && tic_tac_toe[1][2] == 'O' && tic_tac_toe[2][2] == 'O')  ){
      //   std::cout << " you won " << std::endl;
      //   timesWon++;
      //   // not working gamesPlayed++;
      //   for(int c = 0; c < 3; c++){
      //     for(int r = 0; r < 3; r++){
      //       tic_tac_toe[c][r] = ' ';
      //     }
      //   }
      // }
      // //this checks if they lost
      // if((tic_tac_toe[0][0] == 'X' && tic_tac_toe[1][0] == 'X' && tic_tac_toe[2][0] == 'X') || (tic_tac_toe[0][1] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[0][2] == 'X') || (tic_tac_toe[0][2] == 'X' && tic_tac_toe[1][2] == 'X' && tic_tac_toe[2][2] == 'X') || (tic_tac_toe[0][0] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[2][2] == 'X') || (tic_tac_toe[0][2] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[2][0] == 'X') || (tic_tac_toe[0][0] == 'X' && tic_tac_toe[0][1] == 'X' && tic_tac_toe[0][2] == 'X') || (tic_tac_toe[0][1] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[2][1] == 'X') || (tic_tac_toe[0][2] == 'X' && tic_tac_toe[1][2] == 'X' && tic_tac_toe[2][2] == 'X')  ){
      //   std::cout << " you lost this round" << std::endl;
      //   timesWon--;
      //   // not working gamesPlayed++;
      //   for(int c = 0; c < 3; c++){
      //     for(int r = 0; r < 3; r++){
      //       tic_tac_toe[c][r] = ' ';
      //     }
      //   }
      // }
      //not working int gamesPlayed = 0;
      while(turn == 0){
          
          
          std::cin >> coloum;
          std::cin >> row;
          coloum --;
          row--;
          if(tic_tac_toe[coloum][row] != 'O' && tic_tac_toe[coloum][row] != 'X'){
            tic_tac_toe[coloum][row] = 'O';
          std::cout << " " << endl;
          std::cout << "       " << tic_tac_toe[0][0] << "  |  " << tic_tac_toe[1][0] << "  |  " << tic_tac_toe[2][0] << std::endl;
		      std::cout << "     -----+-----+-----" << std::endl;
		      std::cout << "       " << tic_tac_toe[0][1] << "  |  " << tic_tac_toe[1][1] << "  |  " << tic_tac_toe[2][1] << std::endl;
		      std::cout << "     -----+-----+-----" << std::endl;
		      std::cout << "       " << tic_tac_toe[0][2] << "  |  " << tic_tac_toe[1][2] << "  |  " << tic_tac_toe[2][2] << std::endl;
		      turn = 1;
          }
          else{
            std::cout << "enter numbers that are not taken" << std::endl;
          }
        }
        
      //this checks if they won
      if((tic_tac_toe[0][0] == 'O' && tic_tac_toe[0][1] == 'O' && tic_tac_toe[0][2] == 'O') || (tic_tac_toe[1][0] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[1][2] == 'O') || (tic_tac_toe[2][0] == 'O' && tic_tac_toe[2][1] == 'O' && tic_tac_toe[2][2] == 'O') || (tic_tac_toe[0][0] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][2] == 'O') || (tic_tac_toe[2][0] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[0][2] == 'O') || (tic_tac_toe[0][0] == 'O' && tic_tac_toe[1][0] == 'O' && tic_tac_toe[2][0] == 'O') || (tic_tac_toe[0][1] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][1] == 'O') || (tic_tac_toe[0][2] == 'O' && tic_tac_toe[1][2] == 'O' && tic_tac_toe[2][2] == 'O')  ){
        std::cout << " you won" << std::endl;
        timesWon++;
        // not working gamesPlayed++;
        for(int c = 0; c < 3; c++){
          for(int r = 0; r < 3; r++){
            tic_tac_toe[c][r] = ' ';
          }
        }
      }
      //this checks if they lost
      else if((tic_tac_toe[0][0] == 'X' && tic_tac_toe[0][1] == 'X' && tic_tac_toe[0][2] == 'X') || (tic_tac_toe[1][0] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[1][2] == 'X') || (tic_tac_toe[2][0] == 'X' && tic_tac_toe[2][1] == 'X' && tic_tac_toe[2][2] == 'X') || (tic_tac_toe[0][0] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[2][2] == 'X') || (tic_tac_toe[2][0] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[0][2] == 'X') || (tic_tac_toe[0][0] == 'X' && tic_tac_toe[1][0] == 'X' && tic_tac_toe[2][0] == 'X') || (tic_tac_toe[0][1] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[2][1] == 'X') || (tic_tac_toe[0][2] == 'X' && tic_tac_toe[1][2] == 'X' && tic_tac_toe[2][2] == 'X')  ){
        std::cout << " you lost" << std::endl;
        timesWon--;
        // not working gamesPlayed++;
        for(int c = 0; c < 3; c++){
          for(int r = 0; r < 3; r++){
            tic_tac_toe[c][r] = ' ';
          }
        }
      }
      while(turn == 1 && timesWon == 0){
        num1 = ((rand()% 2) + 0);
        num2 = ((rand()% 2) + 0);
        while(tic_tac_toe[num1][num2] == 'O' || tic_tac_toe[num1][num2] == 'X'){
          num1 = ((rand()% 2) + 0);
          num2 = ((rand()% 2) + 0);
        }
        if(tic_tac_toe[num1][num2] != 'O' && tic_tac_toe[num1][num2] != 'X'){
            tic_tac_toe[num1][num2] = 'X';
        }
          
      //   std::cout << " " << std::endl;
      //   std::cout << "       " << tic_tac_toe[0][0] << "  |  " << tic_tac_toe[1][0] << "  |  " << tic_tac_toe[2][0] << std::endl;
		    // std::cout << "     -----+-----+-----" << std::endl;
		    // std::cout << "       " << tic_tac_toe[0][1] << "  |  " << tic_tac_toe[1][1] << "  |  " << tic_tac_toe[2][1] << std::endl;
		    // std::cout << "     -----+-----+-----" << std::endl;
		    // std::cout << "       " << tic_tac_toe[0][2] << "  |  " << tic_tac_toe[1][2] << "  |  " << tic_tac_toe[2][2] << std::endl;
	      turn = 0;
      }
      std::cout << " " << std::endl;
      std::cout << "       " << tic_tac_toe[0][0] << "  |  " << tic_tac_toe[1][0] << "  |  " << tic_tac_toe[2][0] << std::endl;
		  std::cout << "     -----+-----+-----" << std::endl;
		  std::cout << "       " << tic_tac_toe[0][1] << "  |  " << tic_tac_toe[1][1] << "  |  " << tic_tac_toe[2][1] << std::endl;
		  std::cout << "     -----+-----+-----" << std::endl;
	    std::cout << "       " << tic_tac_toe[0][2] << "  |  " << tic_tac_toe[1][2] << "  |  " << tic_tac_toe[2][2] << std::endl;
	    
      //this checks if they won
      if((tic_tac_toe[0][0] == 'O' && tic_tac_toe[1][0] == 'O' && tic_tac_toe[2][0] == 'O') || (tic_tac_toe[0][1] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][1] == 'O') || (tic_tac_toe[0][2] == 'O' && tic_tac_toe[1][2] == 'O' && tic_tac_toe[2][2] == 'O') || (tic_tac_toe[0][0] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][2] == 'O') || (tic_tac_toe[0][2] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][0] == 'O') || (tic_tac_toe[0][0] == 'O' && tic_tac_toe[0][1] == 'O' && tic_tac_toe[0][2] == 'O') || (tic_tac_toe[0][1] == 'O' && tic_tac_toe[1][1] == 'O' && tic_tac_toe[2][1] == 'O') || (tic_tac_toe[0][2] == 'O' && tic_tac_toe[1][2] == 'O' && tic_tac_toe[2][2] == 'O')  ){
        std::cout << " you won" << std::endl;
        timesWon++;
        // not working gamesPlayed++;
        for(int c = 0; c < 3; c++){
          for(int r = 0; r < 3; r++){
            tic_tac_toe[c][r] = ' ';
          }
        }
      }
      //this checks if they lost
      else if((tic_tac_toe[0][0] == 'X' && tic_tac_toe[1][0] == 'X' && tic_tac_toe[2][0] == 'X') || (tic_tac_toe[0][1] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[0][2] == 'X') || (tic_tac_toe[0][2] == 'X' && tic_tac_toe[1][2] == 'X' && tic_tac_toe[2][2] == 'X') || (tic_tac_toe[0][0] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[2][2] == 'X') || (tic_tac_toe[0][2] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[2][0] == 'X') || (tic_tac_toe[0][0] == 'X' && tic_tac_toe[0][1] == 'X' && tic_tac_toe[0][2] == 'X') || (tic_tac_toe[0][1] == 'X' && tic_tac_toe[1][1] == 'X' && tic_tac_toe[2][1] == 'X') || (tic_tac_toe[0][2] == 'X' && tic_tac_toe[1][2] == 'X' && tic_tac_toe[2][2] == 'X')  ){
        std::cout << " you lost" << std::endl;
        timesWon--;
        // not working gamesPlayed++;
        for(int c = 0; c < 3; c++){
          for(int r = 0; r < 3; r++){
            tic_tac_toe[c][r] = ' ';
          }
        }
      }
      I++;
    }
    points.SetPoints(timesWon); 
    std::cout << "you got " << points.GetTacPoints() << " points."  << std::endl;
  }
  
  
}