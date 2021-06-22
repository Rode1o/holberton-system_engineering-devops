#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int infinite_while(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}

int main(void)
{
	int z;
	pid_t pid;

	for(z = 0; z < 5; z++)
	{
		pid = fork();
		if (pid != 0)
		{
			printf("Zombie process created, PID: %i\n", pid);
		}
		else
		{
			exit(0);
		}
	}
	infinite_while();
	return (0);
}
