#include <stdio.h>
#include <unistd.h>

int main()
{
	int pid;
	int x = 0;
    
    x = x + 1;
    fork();
    
	x = 3;
	printf("%d\n", x);
}