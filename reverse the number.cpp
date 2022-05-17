#include<iostream>
using namespace std;

class reverse
{
    private:
 int x;
 public:
 int get(int q){
     x=q;
 }

 void dispaly()
 {
 while (x != 0)
 {
 int r = x % 10; // Get the last digit of x
 x = x / 10; // divide x by 10 through integer 
 cout << r<<" ";
}
} 
};
int main()
{
    reverse r1;
    r1.get(468);
    r1.dispaly();
    cout <<endl;
    reverse r2;
    r2.get(312);
    r2.dispaly();

}



