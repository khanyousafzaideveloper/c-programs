#include <iostream>
using namespace std;
int main()
{
 int month, day;
 
 int DaysPerMonth[12]={31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
 cout << "Enter the month ";
 cin >> month;
 
 cout << "enter date ";
 cin >> day;
 int totaldays=day;
 
 for(int i=0; i<month-1; i++)
 totaldays+=DaysPerMonth[i];
 
 cout << "Total days: " << totaldays;
}
