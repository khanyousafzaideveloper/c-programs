#include <iostream>
using namespace std;
int main()
{
    void order(int*, int*);
    int n1=92, n2=32, n3=74, n4=43;

    order(&n1, &n2);
    order(&n3, &n4);

    cout << "n1: " << n1 <<endl;
    cout << "n2: " << n2 <<endl;
    cout << "n3: " << n3 <<endl;
    cout << "n4: " << n4 <<endl;
}
void order(int *num1, int *num2)
{
    if(*num1>*num2)
    {
        int temp=*num1;
        *num1=*num2;
        *num2=temp;
    }
}
