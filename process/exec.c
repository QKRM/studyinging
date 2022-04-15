#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
    prtinf("origin process: %d\n",getpid());
    sleep(1);
    execl("/bin/sh","sh",NULL);
    exit(0);
}