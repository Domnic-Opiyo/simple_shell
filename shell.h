#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <unistd.h>

/* Function prototypes */
void print_prompt(void);
char *read_line(void);
void execute_command(char *command);

#endif /* SHELL_H */

