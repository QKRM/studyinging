#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int pid;

    if((pid = fork()) > 0)
    {
        printf("parent process : %d\n", getpid());
        return 0;
    }
    else if (pid == 0)
    {
        printf("child process : %d\n", getpid());
        return 0;
    }
    else
    {
        perror("fork error : ");
        exit(0);
    }
    return 0;
}