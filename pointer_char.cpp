#include <iostream>
using namespace std;
int main()
{
    char* str1="Hello, I am coding.";
    char str2[]="Lets try array.";

    cout << str1 <<endl;
    cout << str2 << endl;

    str1++;
    // str2++;   // because str 2 is constant

    cout  << str1 <<endl;

}