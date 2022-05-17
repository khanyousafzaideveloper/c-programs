#include <iostream>
using namespace std;
int funArray(){
        int array[5]={32, 23, 54, 21, 5};
        for(int i=0; i<5; i++)
        {
            cout << array[i] <<endl;
        }
    }
int funarray2(){
    int array[5]={32, 23, 54, 21, 5, 43};
        for(int i=0; i<5; i++)
        {
            cout << *(array + i) <<endl;
        }
}    
int main()
{
    
    cout << funArray() << endl;
    //cout << "!@#$%^&*()" << endl;
    //cout << funarray2();

} 