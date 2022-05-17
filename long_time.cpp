#include <iostream>
using namespace std;
int main()
{
    int num;
    int n=1;
    int count=0;

    cout << "Enter a number" << endl;
    cin >> num;
    cout << "first 10 even numbers are: ";
    while (num>=0)
    {
        if (num % 2==0)
        {
            cout << n << ") "<<num << "   ";
            n++;
            count=count+1;
            if (count>=10)
            break;
        }
        num=num-1;
    }
}