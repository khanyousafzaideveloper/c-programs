#include <iostream>  
using namespace std; 
void toBinary(int n); 
int main()  

{
	int x;
	cout<<"Enter the number to convert: ";    
cin>>x;
toBinary(x);
}  
void toBinary(int n)
{
	

int a[10], i;    
    
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}  
