#include<iostream>
using namespace std;
int main()
{
int num;
 cout<<"Enter a number: ";
 cin>>num;
if(num%2!=0)
 if(num>10)
 if(num<20)
 cout<<"your numbers is ODD, >10 and <20\n";
 else
 cout<<"your number is odd, >20  and < infinity";
 else
 cout<<"your number is odd < 10 and > -infinity"; 
else if(num<0)
 cout<<"your number is   even  < 0 and > -infinity";
else
 cout<<"your is even, >-infinity  and < infinity";

}


