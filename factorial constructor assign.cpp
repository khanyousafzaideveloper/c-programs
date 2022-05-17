#include<iostream>
using namespace std;

class factorial {
  private :
  	int num;
    long fac= 1;
 public :
    factorial (int x){
    	num = x;
   	}
  void calculatefactorial(){
        for(int j=1; j<=num; j++){
            fac*= j;
        }
        }
    void showfactorial(){
        cout << " The factorial is: " << fac << endl;
    }
};

int main()
{
    factorial fact1(5), fact2(4);
    fact1.calculatefactorial();
    fact1.showfactorial();
    
    fact2.calculatefactorial();
    fact2.showfactorial();
    
    return 0;
}
