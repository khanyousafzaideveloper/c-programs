#include<iostream>
using namespace std;
int main()
{
    int number;
    char ch;
    do
    {
    cout << "Enter a number: ";
    cin >> number;
    if(number>100)
    cout << "The number is greater then 100"<< endl;
    cout << "to end the loop press #: ";
    cin>> ch;
    }
    while(ch!='#');
}