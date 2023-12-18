#include "shell.h"

/**
 * print_message - prints the commandline message
 * @m: the message
 */

void print_message(const char *m)
{
	write(STDOUT_FILENO, m, strlen(m));
}
