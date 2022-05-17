#include <iostream>
using namespace std;
int main()
{
	int intvar;   // variabe of type int
	float flovar; // variable of type float
	
	int *ptrint;  // defining pointer to type int
	float *ptrflo; // defining pointer to type float
	void *ptrvoid;  // defing pointer to void
	
	//cout << &intvar;
	
	ptrint= &intvar;  // its okay, int* to int*
	//ptrint= &flovar;  // error, int* to float*
	//ptrflo=&intvar;   // error, float* to int* 
	ptrflo=&flovar;  //its okay, float* to float*
	ptrvoid=&intvar;   // its okay, int* to void*
	ptrvoid=&flovar;     /// its okay, float* to void*
	
	cout << ptrvoid << endl;
	cout << ptrflo << endl;
	cout << ptrint << endl;
}

