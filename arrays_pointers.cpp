#include <iostream>
using namespace  std;
int main()
{
    const int DAYS=7;
    const int Q=5;

    char* array[DAYS]={"Monday", "Tuesday", "wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    char A[Q]={'A','s', 'w', 'q', 'e'};

    for(int i=0; i<DAYS; i++)
    cout << array[i] <<endl;

    for(int j=0; j<Q; j++)
    cout << A[j]<<endl;
}