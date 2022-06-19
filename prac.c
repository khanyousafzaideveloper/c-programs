// Ahmad Abid _ RollNO 55 _ Date 18/5/22

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int filedes[2];
    char buffer[1025];
    char *message = "Salam";

    pipe(filedes);
    write(filedes[1], message, strlen(message));

    if ((n = read ( filedes[0], buffer, 1024 ) ) >= 0) {
        buffer[n] = 0;  
        printf("read %d bytes from the pipe: %s \n", n, buffer);
    }  
    else
        perror("read");
}