#include <iostream>
using namespace std;
class vehical{
    public:
    string Name(string name){
        return name;
    } 
};
class toyota: public vehical{
    public:
    string Color(string color){
        return color;
    }
};
int main()
{
    toyota c1;
    cout << c1.Name("corola") << endl;
    cout << c1.Color("black") << endl;

}