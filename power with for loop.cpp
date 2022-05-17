#include<iostream>
using namespace std;
int main()
{
 int x,y;//x is base , y is power
 cin>>x>>y;
 int result=1;
 for(int i=1;i<=y;i++)
 result*=x;
 cout<<x<<" to the power "<<y<<" = "<<result<<endl;
}


