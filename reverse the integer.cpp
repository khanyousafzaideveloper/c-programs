#include<iostream>
using namespace std;
int main()
{
 int x;
 cin>>x;
 while (x != 0)
 {
 int r = x % 10; // Get the last digit of x
 x = x / 10; // divide x by 10 through integer 
 cout << r<<" ";
 } } 

