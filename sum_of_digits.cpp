#include <iostream>
using namespace std;
int main()
  {
  

int digital_root(int n) 
{
  int digit_sum=0;
  if (n==0)
    {
    return n;
  }
  else if(n<0) 
    {
    return n;
      std::cout << "Enter a positive integer"<<std::endl;
   
  }
  else
    while(n>0)
    {
      digit_sum =+ n % 10;
      n = n / 10;
    }
  return digit_sum; 
}
std::cout << digital_root(232);
}