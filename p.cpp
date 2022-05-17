#include <iostream>
using namespace std;
int main()
{
	int n[3];
	n[2]=32;
	n[1]=21;
	n[0]=23;
	int *pn;
	pn=new int[3];
	pn[0]=212;
	pn[1]=211;
	pn[2]=231;
	cout << pn[2];
}
