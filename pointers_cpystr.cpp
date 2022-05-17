#include <iostream>
#include <cstring>
using namespace std;
int main()
{
void copystr(char*, const char*); //prototype
char* str1 = “Self-conquest is the greatest victory.”;
char str2[80];
//empty string
copystr(str2, str1);
cout << str2 << endl;
return 0;
}
//copy str1 to str2
//display str2Pointers
//--------------------------------------------------------------
void copystr(char* dest, const char* src)
{
while( *src )
//until null character,
{
    *dest++ = *src++;
//copy chars from src to dest
*dest = ‘\0’;
//terminate dest
}
}