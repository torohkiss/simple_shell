#include "shell.h"

/**
 * exec_cmds - function to execute commands
 * @cmd: the command
 *
 * Return: void
 */

void exec_cmds(const char *cmd)
{
	pid_t c_pid;

	c_pid = fork();

	if (c_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (c_pid == 0)
	{
		execlp(cmd, cmd, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
