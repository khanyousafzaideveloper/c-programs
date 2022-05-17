#include <iostream>
using namespace std;
int main()
{
	int r, b, c, x, y, z;
	
	cout<< "Enter number of rickshaws:" << endl;
	cin >> r;
	
	cout << "Enter number of buses:" << endl;
	cin >> b;
	
	cout << "Enter number of cars:" << endl;
	cin >> c;
	
	cout <<"Number of Rickshaws:" << r << endl;
	cout << "Amount  : Rs" << r*100 << endl;
	x = r*100;
	cout <<"Number of cars: "<< c << endl;
	cout <<"Amount : Rs" << c*200 << endl;
	y=c*200;
	cout << "Number of buses: " << b << endl;
	cout << "Amount : Rs" << b* 300 << endl;
	z=b*300;
	cout <<"*********************************" <<endl;
	cout << "Total Amount : " << x+y+z << endl; 
	cout <<"*********************************" <<endl;
 }
