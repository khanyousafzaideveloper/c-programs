#include <iostream>
//#include <iomanip>
using namespace std;
int main()
{
//Declare variables	
const int N = 5;
int counter; //loop control variable
int number; //variable to store the new number
int zeros = 0; //Step 1
int odds = 0; //Step 1
int evens = 0; //Step 1
cout << "Please enter " << N << " integers, "
<< "positive, negative, or zeros."
<< endl; //Step 2
cout << "The numbers you entered are:" << endl;
for (counter = 1; counter <= N; counter++) //Step 3
{
cin >> number; 

switch (number % 2)
{
case 0:
evens++;
if (number == 0)
zeros++;
break;
case 1:
case -1:
odds++;
} //end switch
} //end for loop
cout << endl;
//Step 4
cout << "There are " << evens << " evens, "
<< "which includes " << zeros << " zeros."
<< endl;
cout << "The number of odd numbers is: " << odds
<< endl;
return 0;
}
