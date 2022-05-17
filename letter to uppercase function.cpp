#include <iostream>
#include <cctype>
using namespace std;
char is_capital(char );	
int main()
{
	char alpha;
 	cout << "write a letter to get upper case letter"<<endl;
	cin >> alpha; 
    is_capital(alpha);
}
char is_capital(char letter)
{
int x;
x= isupper(letter);
cout << x <<endl;
switch(x)
{
case 0:
cout << "False" << endl;
cout << "This letter is lowercase."<<endl; 	
letter= letter-32;
cout << "Upper case letter is: " <<letter;
break;

case 1:
cout << "True "<< endl;	
cout << "The letter you entered is uppercase.";
break;

default:
	cout << "Wrong input" <<endl;
}
}

