#include <iostream> //Header file iostream
using namespace std;
int main()
{ int num=0,sum=0;
 int reminder=0,quotient=0;//declaring variables
 cout<<"please enter a number :";
 cin>>num; //input number
 reminder=num%10;
 sum=sum+reminder;
 quotient=num/10;
 reminder=quotient%10;
 sum=sum+reminder;
 quotient= quotient/10;
 sum=sum+quotient;
 cout<<"sum="<<sum;
 return 0;
}
