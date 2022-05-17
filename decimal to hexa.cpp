#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	char a[] ={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'E', 'D', 'F'};
	int num, i, z, h;
	cin >> num;
	while(i>0)
	{
		i=num%16;
		cout << a[i];
		num=num/16;
		
	}
	 
}
