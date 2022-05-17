#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
  pid_t pid = fork();
  int status = 0;
  if(pid == 0)
  {
    char* args[] = {"ls",NULL};
    execv("/usr/bin/ls", args);
    exit(0);
  }
  else if(pid > 0)
  {
    pid_t child_pid = wait(&status);
  }
}