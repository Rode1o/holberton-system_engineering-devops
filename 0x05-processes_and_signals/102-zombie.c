#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

/**
* infinite_while - for every zombie process created,
* it displyas zombies process created, PID: ZOMBIE_PID
* Return: zero
*
*/

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Create 5 zombie process
 * Return: zero
 */

int main(void)
{
	int z;
	pid_t pid;

	for (z = 0; z < 5; z++)
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
