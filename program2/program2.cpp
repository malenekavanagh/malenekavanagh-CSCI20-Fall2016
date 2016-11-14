/* 
creator: Malene Kavanagh
date: 10/2/16
purpose: to convert measurements

requirements:


*/

#include <iostream>
using namespace std;

class convertions{
    private:
        double miles1;
        double yards1;
        double meters1;
        double feet1;
        double inches1;
        
    public:
        void SetMiles(double miles);
        void SetYards(double yards);
        void SetMeters(double meters);
        void SetFeet(double feet);
        void SetInches(double inches);
        //miles to ...
        double GetMilesToYards()const;
        double GetMilesToMeters()const;
        double GetMilesToFeet()const;
        double GetMilesToInches()const;
        //yards to ...
        double GetYardsToMiles()const;
        double GetYardsToMeters()const;
        double GetYardsToFeet()const;
        double GetYardsToInches()const;
        //meters to ...
        double GetMetersToMiles()const;
        double GetMetersToYards()const;
        double GetMetersToFeet()const;
        double GetMetersToInches()const;
        //feet to ...
        double GetFeetToMiles()const;
        double GetFeetToYards()const;
        double GetFeetToMeters()const;
        double GetFeetToInches()const;
        //inches to ...
        double GetInchesToMiles()const;
        double GetInchesToYards()const;
        double GetInchesToMeters()const;
        double GetInchesToFeet()const;
};

void convertions::SetMiles(double miles){
    miles1 = miles;
    return;
}
void convertions::SetYards(double yards){
    yards1 = yards;
    return;
}
void convertions::SetMeters(double meters){
    meters1 = meters;
    return;
}
void convertions::SetFeet(double feet){
    feet1 = feet;
    return;
}
void convertions::SetInches(double inches){
    inches1 = inches;
    return;
}
//miles to ... math
double convertions::GetMilesToYards()const {
    return miles1 * (1760);
}
double convertions::GetMilesToMeters()const {
    return miles1 * (1609.344);
}
double convertions::GetMilesToFeet() const {
    return miles1 * (5280);
}
double convertions::GetMilesToInches()const{
    return miles1 * (63360);
}
//yards to ... math
double convertions::GetYardsToMiles()const{
    return yards1 / (1760);
}
double convertions::GetYardsToMeters()const{
    return yards1 * (0.914);
}
double convertions::GetYardsToFeet()const{
    return yards1 * (3);
}
double convertions::GetYardsToInches()const{
    return yards1 * (36);
}
//meters to ... math
double convertions::GetMetersToMiles()const{
    return meters1 / (1609.344);
}
double convertions::GetMetersToYards()const{
  return meters1 * (1.0936);  
}
double convertions::GetMetersToFeet()const{
    return meters1 * (3.2808);
}
double convertions::GetMetersToInches()const{
    return meters1 * (39.3701);
}
//feet to ... math
double convertions::GetFeetToMiles()const{
    return feet1 * (0.000189394);
}
double convertions::GetFeetToYards()const{
    return feet1 / (3);
}
double convertions::GetFeetToMeters()const{
    return feet1 * (0.3048);
}
double convertions::GetFeetToInches()const{
    return feet1 * (12);
}
//inches to ... math
double convertions::GetInchesToMiles()const{
    return inches1 / (63360);
}
double convertions::GetInchesToYards()const{
    return inches1 / (36);
}
double convertions::GetInchesToMeters()const{
    return inches1 / (39.3701);
}
double convertions::GetInchesToFeet()const{
    return inches1 / (12);
}

int main(){
    convertions convert;
    string from;
    string to;
    double fromNum;
    double toNum;
    std::cout << "this program converts measurements" << std::endl;
    std::cout << "we have miles, yards, meters, feet and inchest " << std::endl;
    std::cout << "what do you want to convert" << std::endl;
    std::cin >> from;
    std::cout << "what do you want to convert to?" << std::endl;
    std::cin >> to;
    
    if(from == "miles" || from == "Miles"){
        if(to == "meters" || to == "Meters"){
            std::cout << "input miles" << std::endl;
            std::cin >> fromNum;
            convert.SetMiles(fromNum);
            toNum = convert.GetMilesToMeters();
        }
        else if(to == "yards" || to == "Yards"){
            std::cout << "input miles" << std::endl;
            std::cin >> fromNum;
            convert.SetMiles(fromNum);
            toNum = convert.GetMilesToYards();
        }
        else if(to == "feet" || to == "Feet"){
            std::cout << "input miles" << std::endl;
            std::cin >> fromNum;
            convert.SetMiles(fromNum);
            toNum = convert.GetMilesToFeet();
        }
        else if(to == "inches" || to == "Inches"){
            std::cout << "input miles" << std::endl;
            std::cin >> fromNum;
            convert.SetMiles(fromNum);
            toNum = convert.GetMilesToInches();
        }
        else{
            std::cout << "sorry couldn't understand try again" << std::endl;
        }
    }
    else if(from == "meters" || from == "Meters"){
    
        if(to == "miles" || to == "Miles"){
            std::cout << "input meters" << std::endl;
            std::cin >> fromNum;
            convert.SetMeters(fromNum);
            toNum = convert.GetMetersToMiles();
        }
        else if(to == "yards" || to == "Yards"){
            std::cout << "input meters" << std::endl;
            std::cin >> fromNum;
            convert.SetMeters(fromNum);
            toNum = convert.GetMetersToYards();
        }
        else if(to == "feet" || to == "Feet"){
            std::cout << "input meters" << std::endl;
            std::cin >> fromNum;
            convert.SetMeters(fromNum);
            toNum = convert.GetMetersToFeet();
        }
        else if(to == "inches" || to == "Inches"){
            std::cout << "input meters" << std::endl;
            std::cin >> fromNum;
            convert.SetMeters(fromNum);
            toNum = convert.GetMetersToInches();
        } 
        else{
            std::cout << "sorry couldn't understand try again" << std::endl;
        }
    }
    else if(from == "yards" || from == "Yards"){
        if(to == "miles" || to == "Miles"){
            std::cout << "input yards" << std::endl;
            std::cin >> fromNum;
            convert.SetYards(fromNum);
            toNum = convert.GetYardsToMiles();
        }
        else if(to == "meters" || to == "Meters"){
            std::cout << "input yards" << std::endl;
            std::cin >> fromNum;
            convert.SetYards(fromNum);
            toNum = convert.GetYardsToMeters();
        }
        else if(to == "feet" || to == "Feet"){
            std::cout << "input yards" << std::endl;
            std::cin >> fromNum;
            convert.SetYards(fromNum);
            toNum = convert.GetYardsToFeet();
        }
        else if(to == "inches" || to == "Inches"){
            std::cout << "input yards" << std::endl;
            std::cin >> fromNum;
            convert.SetYards(fromNum);
            toNum = convert.GetYardsToInches();
        } 
        else{
            std::cout << "sorry couldn't understand try again" << std::endl;
        }
    }
    else if(from == "feet" || from == "Feet"){
        if(to == "miles" || to == "Miles"){
            std::cout << "input feet" << std::endl;
            std::cin >> fromNum;
            convert.SetFeet(fromNum);
            toNum = convert.GetFeetToMiles();
        }
        else if(to == "meters" || to == "Meters"){
            std::cout << "input feet" << std::endl;
            std::cin >> fromNum;
            convert.SetFeet(fromNum);
            toNum = convert.GetFeetToMeters();
        }
        else if(to == "yards" || to == "Yards"){
            std::cout << "input feet" << std::endl;
            std::cin >> fromNum;
            convert.SetFeet(fromNum);
            toNum = convert.GetFeetToYards();
        }
        else if(to == "inches" || to == "Inches"){
            std::cout << "input feet" << std::endl;
            std::cin >> fromNum;
            convert.SetFeet(fromNum);
            toNum = convert.GetFeetToInches();
        } 
        else{
            std::cout << "sorry couldn't understand try again" << std::endl;
        }
    }
    else if(from == "inches" || from == "Inches"){
        if(to == "miles" || to == "Miles"){
            std::cout << "input inches" << std::endl;
            std::cin >> fromNum;
            convert.SetInches(fromNum);
            toNum = convert.GetInchesToMiles();
        }
        else if(to == "meters" || to == "Meters"){
            std::cout << "input inches" << std::endl;
            std::cin >> fromNum;
            convert.SetInches(fromNum);
            toNum = convert.GetInchesToMeters();
        }
        else if(to == "yards" || to == "Yards"){
            std::cout << "input inches" << std::endl;
            std::cin >> fromNum;
            convert.SetInches(fromNum);
            toNum = convert.GetInchesToYards();
        }
        else if(to == "feet" || to == "Feet"){
            std::cout << "input inches" << std::endl;
            std::cin >> fromNum;
            convert.SetInches(fromNum);
            toNum = convert.GetInchesToFeet();
        } 
        else{
            std::cout << "sorry couldn't understand try again" << std::endl;
        }
    }
    
    std::cout << "converted " << fromNum << from << " to" << toNum << to << std::endl;
} 