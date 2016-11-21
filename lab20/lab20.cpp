/*
Malene Kavanagh
purpose: to comment and understand what the code is doing
*/
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
                char firststr[10];
                int firstname = 0;
                char *head = firststr;
                char *tail = firststr;
                cout << "Please enter a 10 letter word or less" << endl;
                cin >> firststr;
                strlen(firststr);
                firstname = strlen(firststr);
                cout << "Your word is " << firststr << endl;
                if (firstname<10)
                {
                                while (*head != '\0')
                                {
                                                cout << *head;
                                                head++;
                                }
                }
                else
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                }
                cout << endl;
                tail = &firststr[strlen(firststr) - 1];
                if (firstname < 10)
                {
                                while (*tail>0)
                                {
                                                cout << *tail;
                                                tail--;
                                }
                }
                cout << endl;
                head = firststr;
                tail = &firststr[strlen(firststr) - 1];
                head++;
                tail--;
                if (*head == *tail)
                {
                                cout << "It is an palindrome!" << endl;
                }
                else
                {
                                cout << "It is not an palindrome" << endl;
                }
 
                return 0;
}
