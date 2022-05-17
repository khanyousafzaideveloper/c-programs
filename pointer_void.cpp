#include <iostream>
using namespace std;
int main()
{
    int x;
    float y;

    int *intptr;
    float *floptr;
    void *voptr;

    intptr=&x;
    // floptr=&x;
    // intptr=&y;
    floptr=&y;
    
    cout << "intptr : " << intptr << endl;
    cout << "floptr : "  << floptr << endl;

    voptr=&x;
    cout << "void ptr for x : " << voptr << endl;
    
    voptr=&y;
    cout << "void ptr for y : " << voptr << endl;
}