//• Lab Problem-1
//Write a C++ program to find the summation of the following series (using for statement)
//S=1+ 4 + 9+ 16+………+(n*n)

#include <iostream>
using namespace std;
int main()
{ 
//variable declaration
  int limit;
  int sum;
  int n;
  cout << "Enter the limit of the series" << endl;
  cin >> limit;
  for(n=1; n<=limit; n++)
  {
	sum+=n*n; 
  }
    cout <<"The summation of series =" <<sum;
}
