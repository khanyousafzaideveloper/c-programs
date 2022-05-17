#include <iostream>
using namespace std;
int reversedigit(int num);
int main()
{
	int f;
	cin >> f;
	cout << reversedigit(f);
}
int reversedigit(int num)
{
	int v;
   while(num>=0)
   {
   	 v=num%10;
   	 cout << v <<" ";
     num/10;
   }
   
   cout << "xxxxxx " << v;
   
}

