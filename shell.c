#include "shell.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char cmd[128];

	while(1)
	{
		promptdisplay();
		commands(cmd, sizeof(cmd));
		exec_cmds(cmd);
	}

	return (0);
}
