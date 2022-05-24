#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

static void sig_usr(int signo)
{
        if (signo == SIGUSR2)
                printf("Process of Horbulinskyi got signal\n");
}

int main(void) {
	if (signal(SIGUSR2, sig_usr) == SIG_ERR)
		fprintf(stderr, "Impossible to get the SIGUSR2 signal\n");
	printf("My PID is %d. Waiting for SIGUSR2\n",getpid());
	for ( ; ; )
        pause();
        return EXIT_SUCCESS;
}


