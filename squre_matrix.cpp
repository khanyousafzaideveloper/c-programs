#include <iostream>
using namespace std;

int main()
{
    cout << "hello world "<< endl;
    int myarray[3][5]={ {4, 2, 1, 4, 12}, 
                        {12, 23, 12, 43, 21},
                        {23, 34, 12, 3, 23} };
    
    // for accessing one element in two dimentional array
    cout << myarray[0][2] << endl;
    cout << myarray[2][3] << endl;

    // accessing all elements in array
    for(int i=0; i < 3; i++)
    { 
    for(int j=0; j<5; j++)
    {
        cout << "myarray [ " << i << "] [ " << j << " ] = " << myarray[i][j] << endl; 
    }
    }
    myarray[0][1] = 43;
    cout<< "new value of myarray[0][1] = " << myarray[0][1] << endl;
 
    int var1, var2, var3;
    var1 = var2 = var3 = 100;
    cout << "VAR1 ==================== " << var1 <<endl;
    if(var1==var2==var3)
    cout << "VAR1 ===" << var1 <<endl;
    else 
    {
        cout << "not equal" <<endl;
    }
}