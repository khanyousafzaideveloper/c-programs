#include <stdio.h>

int main()
{   
    fork(); 
    printf("Hello world:  %d\n", getpid());
}

// it basically created two processes
// both of them will have different process id
// we can get process id by using getpid() function.... lets use it.
// lets run it now again