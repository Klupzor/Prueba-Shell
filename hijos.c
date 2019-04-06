#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t child_pid, diomedes, baby_id;
    int status, i;


	for (i = 0 ; i < 3 ; i++)
	{

		diomedes = getppid();
    		child_pid = fork();
		baby_id = getpid();
       		wait(NULL);
	if (child_pid == 0)
		break;
	}
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        printf("hijo : %i %u\n", i, baby_id);
        sleep(2);
        printf("I wake up\n");
    }
    else
    {
       // wait(NULL);
        printf("Diomedes %i %u\n", i, diomedes);
    }
    return (0);
}
