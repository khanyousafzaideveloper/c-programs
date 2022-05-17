#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int x;
	int n;
	int result;
	cout << "Enter Base:" << endl;
	cin >>x;
	cout << "Enter Exponent:"<< endl;
	cin >> n; 
	result = pow(x, n);
	cout << x << "^" << n << "=" << result;
	//cout << "x^n" << endl;
	//cin >> x >> n; 
	//cout << x << pow() << endl;
}
