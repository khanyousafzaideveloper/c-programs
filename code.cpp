#include <iostream>
using namespace std;
int main(){
    int smalln, bign;
    cout << "Enter a bign: "; cin >> bign;
    int j=0;
    do{
        cout << "Enter smalln: "; cin >> smalln;
        if(smalln<bign){ 
        
            j+=1;
            cout << "j: " << j << endl;
        }
        else{
            cout << "Goodbye " ; break;
        }
    }
        while (j<4);
        return 0;
}
    
