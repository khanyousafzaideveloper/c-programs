Question number 3:

With "cin" statement.


//include statement(s)
#include <iostream>

//using namespace statement
using namespace std;
int main()
{
	int num1, num2, num3, average;
	cout << "Enter num1"<< endl;
	cin >> num1;
	cout << "Enter num2"<< endl;
	cin >> num2;
	cout << "Enter num3"<< endl;
	cin >> num3;
	average = ( num1 + num2 + num3)/3;
	cout << "num1 = " << num1;
	cout << "  num2 = " << num2;
	cout << "  num3 = " << num3;
	cout << "  average = " << average;
	return 0;
}
