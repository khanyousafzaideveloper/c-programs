#include <iostream>
using namespace std;
int main()
{
    void disptr(char*);
    disptr("HEllo world, Its me Ahmad");


}
void disptr(char* a)
{
    while(*a){   
        cout << *a++;
        cout << endl;

}
}