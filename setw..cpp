#include <iostream>
#include <iomanip>
//#include <set>
using namespace std;
int main()
{
    string name1="Ahmad", name2="Ali", name3="Asad", name4="Hamza";
    long age1=32323223, age2=23656565, age3=342112, age4=1233242;

    cout << setw(8) << "Name" << set(12) << "Age" 
     << setw(8) << name1 << set(12) << age1 << endl
     << setw(8) << name2 << set(12) << age2 << endl
     << setw(8) << name3 << set(12) << age3 << endl
     << setw(8) << name4 << set(12) << age4 << endl; 
}