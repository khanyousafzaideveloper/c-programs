#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int pow=1;
    int num=1;

    while(pow<10000)
    {
        cout <<setw(1) << num;
        cout <<setw(8) << pow << endl;
        num++;
        pow=num*num*num*num;
    }
    return 0;
}