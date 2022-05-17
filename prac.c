#include <stdio.h>

int add(int a, int f)
{
    int  x;   
    x = (a + f);
    alpha(x);
    printf("%d", x);
}
char alpha(int z)
{
    if (z>5)
    {
        return 'Y';
    }
}


int main()
{
    add(2, 5);
}