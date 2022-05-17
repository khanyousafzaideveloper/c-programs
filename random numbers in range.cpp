#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	// random variable between 70 and 80
	// the formula for random variable is [ a + rand() % (b – a + 1)  ] 
	
	for(int count=1; count<=100; count++)
	cout << 70 + rand()%(80-70+1) << "\t";
}
