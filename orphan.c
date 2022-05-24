#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
        int i;
        pid_t pid = fork();  
        if (pid != 0) 
        {
                sleep(6+1);
                _exit(0);
        }
        else 
	{
                for (i=0;i<(2*6+1); i++) 
		{
                        printf("Parent of Horbulinskyi %d\n", getppid());
                        sleep(1);
                }
        }
return 0;
}
