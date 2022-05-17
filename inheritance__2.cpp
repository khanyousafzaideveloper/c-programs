#include <iostream>
using namespace std;
class plants{
public:
string type;
int height;
string gettype(){
return type;
}
int getheight(){
    return height;
}
};
class trees: public plants{
public:
string location;
int age;

void set(string t, int h, string l, int a)
{
    type=t;
    height=h;
    location=l;
    age=a;
} 
void getdata(){
    cout << "Type :" << type << endl;
    cout << "height :" << height << " nfeet"<<endl;
    cout << "location :" << location << endl;
    cout << "age :" << age <<" years"<< endl;
}
};

int main()
{
    trees p1, p2;
    p1.set("Flowering plant", 300, "Pakistan", 70);
    p1.getdata();
}