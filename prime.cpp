#include <iostream>
using namespace std;
int main()
{
    int j,num;
    cout << "Enter a number: "; cin >> num ; cout << endl;
    for (j=2; j<=num/2; j++)
        if (num%j==0)
        {
            cout << "This is not a Prime Number, its divisible by : " << j;
            exit(0);
        }
        else
        cout << "This is a Prime Number " <<endl;
    
}