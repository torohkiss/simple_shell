#include "shell.h"

/**
 * commands - adds commands
 * @cmd: the commands
 * @size: the size
 *
 * Return: void
 */

void commands(char *cmd, size_t size)
{
	if (fgets(cmd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			print_message("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			print_message("Error trying to get input\n");
			exit(EXIT_FAILURE);
		}
	}
	cmd[strcspn(cmd, "\n")] = '\0';
}
