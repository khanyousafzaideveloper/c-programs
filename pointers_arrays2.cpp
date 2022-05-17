#include <iostream>
using namespace std;
const int MAX =5;
int main()
{
    void func(double*); // prototype
    double array[MAX] ={2.21, 3.1, 3.1, 5.2, 3.7};
    func(array);
    for(int i; i<MAX; i++)
    {
        cout << "Array [ " << i << "] = " <<  array[i] <<endl;
    }

}
void func(double* ptr)
{
    for(int j=0; j<MAX; j++)
        *ptr++ *=2.54;
    
}