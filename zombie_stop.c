#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void sighandler(int sig) 
{
        wait(0);
}
int main (void)
{
        signal(SIGCHLD, &sighandler);
        pid_t pid = fork();
        if (pid == 0) 
	{
                fprintf(stdout, "Child of Horbulinskyi is finished\n");
                _exit(0);
        }
        else 
	{
                sleep(3*6);
        }
return EXIT_SUCCESS;
}
