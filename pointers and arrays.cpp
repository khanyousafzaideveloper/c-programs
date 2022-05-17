#include <iostream>
using namespace std;
int main()
{
	int intarray[5]={12, 12, 43, 54, 12};
	
	for(int j=0; j<5; j++)
	{
		cout << *(intarray+j) << endl;
		
	}
}
