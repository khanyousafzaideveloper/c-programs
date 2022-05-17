#include <iostream>
#include <cstring>
using namespace std;
//for strlen
int main()
{
char* str = "Idle hands are the devil’s workshop." ;
int len = strlen(str);
//get length of str
char* ptr;
ptr = new char[len+1]; //make a pointer to char
//set aside memory: string + ‘\0’
strcpy(ptr, str); //copy str to new memory area ptr
cout << "ptr=" << ptr << endl;
delete[] ptr;
cout << "Garbage value : " <<ptr <<endl;
return 0;
}
