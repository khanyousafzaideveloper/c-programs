#include <stdio.h>
#include <stdlib.h>

int fun1(int x, int y)
    {
        int z  = x + y;
        return z;
    }

int fun2(int q,  int d)
    {
       int  c = q/d;
        return c;
    }

int main()
{
    bool flag = 1;

    while (flag == true);
    {
        printf("%d\n", fun1(3,4));
    }

 

}