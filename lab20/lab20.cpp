/*
Malene Kavanagh
purpose: to comment and understand what the code is doing
*/
#include <iostream> //opening iostream library
#include <cstring> //opening c-string library
using namespace std;
 
int main()
{
                char firststr[10]; //making an array
                int firstname = 0; 
                char *head = firststr; //making a pointer
                char *tail = firststr; //making another pointer
                cout << "Please enter a 10 letter word or less" << endl; //making sure it doesn't go over the letter count
                cin >> firststr; //enters the user's word
                strlen(firststr);  // returns length of cstring
                firstname = strlen(firststr); //placing the cstring into an integer
                cout << "Your word is " << firststr << endl; //outputs the name
                if (firstname<10) //checking if the word is too long
                {
                                while (*head != '\0')
                                {
                                                cout << *head; //outputs the word
                                                head++;
                                }
                }
                else //checking if the word is too long
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                }
                cout << endl;
                tail = &firststr[strlen(firststr) - 1]; //inputs te entire word and flips word
                if (firstname < 10)
                {
                                while (*tail>0)
                                {
                                                cout << *tail; //outputs the  flipped word
                                                tail--;
                                }
                }
                cout << endl;
                head = firststr;
                tail = &firststr[strlen(firststr) - 1];
                head++;
                tail--;
                if (*head == *tail) // checking if the words are similar deciding if they are a palindrome or not
                {
                                cout << "It is an palindrome!" << endl;
                }
                else
                {
                                cout << "It is not an palindrome" << endl;
                }
 
                return 0;
}
//code ends