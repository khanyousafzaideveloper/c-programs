#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter an integer " << endl;
    cin >> a;
    cout << a << -a << a-a << endl;
    for(int n=a; n<=0; n+=3)
    {
        cout << n;
    }
    cout << endl;
    cout << a+20/3 << endl;
    cout << (a+20)%3 << endl;
}