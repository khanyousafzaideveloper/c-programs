#include <iostream>
using namespace std;
int main()
{
	const double cent_per_inch=2.54;
	const int inch_per_feet=12;
	int length, feet, inches, totalinches; 
	double totalcent;
	
	cin >> feet >> inches;
	cout << "feet = "<<feet << "\n inches " << inches <<endl;
	
	totalinches=feet*inch_per_feet + inches;
	cout << "in inches = " << totalinches <<endl;
	
	totalcent= totalinches*cent_per_inch;
	cout << "the total length in centemeter: " << totalcent <<endl; 
}
