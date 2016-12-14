/*
creator: Malene Kavanagh
date:11/13/16
pourpose: CheckBook transaction history

requirements:
-appropriate class
-main should have all input and output
-use array and file input and output
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

class PayeeAdd{
    private:
    
    double totalEarn; //suposed to get the entire array of earnings
    
    public:
    
    void SetTotalTo(double Earnnings);
    double GetAddedTotal() const;
};
void PayeeAdd::SetTotalTo(double Earnings){
    totalEarn = totalEarn + Earnings; //suposed to input the money array
    return;
}
double PayeeAdd::GetAddedTotal()const{
    return totalEarn; //suposed to add the array together
}


int main(){
    ifstream infile;  // creates file input call
    ofstream outfile;  //creates file output call
    string fileName;  
    PayeeAdd payeeadd; // object created for the class
    
    std::cout << "enter file name with .txt or what ever is needed" << std::endl;
    std::cin >> fileName; //inpts file
    
    infile.open(fileName); 
    if(!infile.is_open()){ //makes sure file is open
      std::cout << "could not open file " << fileName << std::endl; 
      return 0;
    }
    outfile.open("outputCheckBook.txt");
    
    string DorC[50]; //large array number to catch most all the info
    string Date[50];
    string names[50];
    double money[50] = {0};
    
    int i = 0;
    
    while(!infile.eof() && i < 50){

        getline(infile, DorC[i], ':');
        getline(infile, Date[i], ':');
        getline(infile, names[i], ':');
        infile >> money[i];
        i++;
    }
    //std::cout << DorC[0] << " " << Date[0] << " " << names[0] << " " << money[0] << std::endl; //a check
    int k = 0;
    while(k < i){
        if(DorC[k] == "deposit" || DorC[k] == "Deposit"){
            
        }
        else{
            money[k] = -money[k];
        }
        k++;
    }
    //std::cout << DorC[1] << " " << Date[1] << " " << names[1] << " " << money[1] << std::endl;//a check
    int j = 0;
    while(j < i && money[j] > 0){
        payeeadd.SetTotalTo(money[j]);
        payeeadd.GetAddedTotal();
        j++;
    }
    double endTotal = payeeadd.GetAddedTotal(); //saves the total to 
  
    int p = 0; //going through names
    int q = 0; //for going through saved names
    int r = 0; //saving names number
    int count[50]; // counting how many times payment 
    string sameNames[50]; // adding array
    while(p < i){
        q = 0;
        if(names[p] != "-"){ // a check for payment names not deposits
            // cout << names[p] << endl;//error check
            while(names[p] != sameNames[q] && q < i){ // making sure the name doesn't already exist in the saved names
                q++; //adding to q
            }
            if(names[p] == sameNames[q]){
                //std::cout << "adding " << count[q]; //error check
                count[q]++;
                //std::cout << " to " << count[q] << std::endl; // error check
            }
            else if(q >= i){
                sameNames[r] = names[p];
                count[r]++;
                //std::cout << "saved " << sameNames[r] << std::endl; //error check
                r++;
            }
            
        }
        p++;
    }
    
    // getline(infile, DorC[i], ':');
    // getline(infile, Date[i], ':');
    // getline(infile, names[i], ':');
    // infile >> money[i];
    int s = 0;
    while(s < i){
        if(DorC[s] != "Deposit" && DorC[s] != "deposit"){
            outfile << Date[s] << " " << names[s] << " $" << money[s] << endl;
        }
        else if(DorC[s] == "Deposit" || DorC[s] == "deposit"){
            outfile << Date[s] << " " << DorC[s] << " $" << money[s] << endl;
        }
        s++;
    }
    int t = 0;
    while(t < r){
        outfile << count[t] << " payments to " << sameNames[t] << endl;
        t++;
    }
    outfile << "your end total is $" <<endTotal << endl;
    std::cout << "your file has been prossesed and entered into outputCheckBook.txt " << std::endl;
    infile.close();
    outfile.close();
}   