#include <iostream>
using namespace std;
class parent()
{
public:
  parent(){cout << "this is parent constructor" << endl;}
  ~parent(){cout << "This is parent destructor"<< endl;}
};
class child: public parent{
public:
  child(){cout << "this is child constructor"<< endl;}
  ~child(){cout << "This is child destructor"<< endl;}
};

int main()
{
  child cobj;
}
