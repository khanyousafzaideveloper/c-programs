#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n[3];
	n[0]=10;
	n[1] = 20;
	n[2]= 30;
	int *pn ;
	pn = new int[3];
	pn[0]= 20;
	pn[1] = 30;
	pn[2]= 40;
	//cout<<pn[2];
	
	char *pstr ;
	pstr = new char[20];
	strcpy(pstr,"Ahmad");
	cout<<pstr;
}
