#include <iostream>
using namespace std;
int main()
{ int limit=0;
  int sum=0;
  int series;
  cin>> limit;
  for( int n=0; n<=limit; n++)
  
  {
     series = n*n;
	 sum= sum + series; 
  }
  cout << sum;
}
