#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

extern char ** environ;

int main (void)
{
	char* less_args[] = { "less","/etc/hosts",NULL };
	pid_t pid = fork();
	if (pid != 0) {
		printf("The child of Horbulinskyi prints next info:\n");
		execve("/bin/less",less_args, environ);
	}
	else
		return EXIT_FAILURE;
 return EXIT_SUCCESS;
}
