#include<iostream>
using namespace std;
int main()
{
 int x,y;//x is base , y is power
 cout << "Enter base:";
 cin>>x;
 cout << endl;
 cout << "Enter power";
 cin>>y;
 cout << endl;
 int result=1;
 for(int i=1;i<=y;i++)
 result*=x;
 cout<<x<<" to the power "<<y<<" = "<<result<<endl;
}
