#include <iostream>
using namespace std;
class base{
    public:
        void show(){
            cout <<  "base " <<endl;
}
};
class derv1: public base{
public:
void show(){
cout <<  "derived 1 /n";
}
};
class derv2:public base{procrastinator
public:
void show()
{cout << "derived 2/n";}
};

int main()
{
    derv1 dv1; 
    derv2 dv2;
    base* ptr;

    ptr = &dv1;
    ptr -> show();

    ptr = &dv2;
    ptr->show();
}