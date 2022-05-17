#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum;
	int counter;
	
	 cout<<"Enter a value for n"<<endl;
	 cin>>n;
	 
	 while (n != -99)
	 {
	 
	 sum += n;
	 cout<<"Enter  next value for n"<<endl;
	 cin>>n;
	 if(n != -99)
	  counter++;
	 }
	 int avg= sum/counter;
	cout<<"the avg of"<<counter<<"number="<<avg<<endl;
	
}

