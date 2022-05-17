#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	while( x<100)
	{
		cout << x <<  endl;
	
		x+=3;
	}
	cout << "outside while loop" << endl;
	return 0;
}
