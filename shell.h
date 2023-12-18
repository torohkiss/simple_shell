#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void promptdisplay(void);
void print_message(const char *message);
void commands(char *cmd, size_t size);
void exec_cmds(const char *cmd);

#endif
