#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	float u, v, y;
	char math;
	string str, q;
	cout << "Enter 'P' to find the Power of the Exponent "<< endl;
	cout <<"ENTER 'R' to find squareroot of a number"<< endl;
	cout << "Enter 'S' to find the length of string" <<endl;
	cin >> math; 
	switch( math)
	{
		
	
	case'P':
	cout << "First enter base and then exponent: " << endl;
	cout << "First number:";
	cin >> v ;
	cout << "enter second number:";
	cin >> y;
	cout << pow(v, y) <<endl;
	break;
	
	case'R':
	cout << "Enter a Number to find its square root:"<< endl;
	cin >> u;
	cout << sqrt(u) << endl;
	break;
	
	case'S': 
	cout << "Enter a string" << endl; 
	cin >> q;
	str = "q";
	cout << "Length of string= "<< str.length() << endl; 
}

return 0;	
	  
	   	
} 
