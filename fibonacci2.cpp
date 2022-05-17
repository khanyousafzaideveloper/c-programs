#include <iostream>
using namepace std;
int main()
{
   int last=1;
   int next=0;
   long limit=10000;

   while(next<limit)
   {
       cout << last << " ";
       long sum=next + last;
       last=sum;
       next=last;
   }


}
