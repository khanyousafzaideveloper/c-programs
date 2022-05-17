#include<iostream>
using namespace std;

int main()
{
    void centimize(double*);  // prototype
    double var = 10.0;
    cout << var << " inches. " <<endl;

    centimize(&var);
    cout << var << "centimeters" <<endl;

}
void centimize(double* value)
{
    *value*=2.54;
}