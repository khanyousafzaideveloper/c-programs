#include<iostream>
using namespace std;
int main()
{
 int x;
 cin>>x;
 bool isPrime=true;
 int i=2;
 while(i<x-1)
 {
 if(x%i==0)
 {
 isPrime=false;
 break;
 }
 i++;
 }
 if(isPrime)
 cout<<"number is prime"<<endl;
 else
 cout<<"number is not prime"<<endl;
}
