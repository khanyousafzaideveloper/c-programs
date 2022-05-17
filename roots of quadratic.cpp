#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	
	// declaring variables 
	float a, b, c ,x1, x2, descriminant, imaginarypart,  realpart;
	cout << "Enter the coefficients a, b and c: ";
	cin >> a >> b >> c; 
	cout << endl;
	descriminant= b*b - 4*a*c;
	if(descriminant>0)
	{
		cout << "The roots are different and real "<<endl;
		x1=(-b + sqrt(descriminant))/(2*a);
		x2=(-b - sqrt(descriminant))/(2*a);
		cout << "x1 = " << x1  << " and "<< "x2 = " << x2 <<endl;
	}
	
	else if(descriminant==0)
	{
    cout << "The roots are same and real: "<<endl;
	x1= -b/(2*a);
	cout << "x1 = x2 = " << x1;
}
    else
	{
    	cout <<"the roots are different and imaginary: " <<endl;
    	realpart= -b/(2*a);
    	imaginarypart= sqrt(-descriminant)/(2*a);
    	cout << "x1 = " << realpart << "+" << imaginarypart << "i" <<endl;
    	cout << "x1 = " << realpart << "-" << imaginarypart << "i" <<endl;
	}
}

