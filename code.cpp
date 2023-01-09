#include <iostream>
using namespace std;
int main(){
    int last=0, next = 0, sum;
    do{
        sum = last + next;
        last = sum;
       
        cout << "Enter a number you want to sum: ";
        cin >> next; 
    }
    while(next!=0);
     cout << "sum: " << endl;
     cout << sum << endl;
    return 0;
}