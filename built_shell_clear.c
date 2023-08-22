#include "shell.h"

/**
 * shell_clear - removes the terminal's display.
 * @args: a list of arguments
 *
 * Return: 1 to carry on with the execution, 0 to stop.
*/
int shell_clear(char **args)
{
	(void)args; /* evade the warning about an "unsued parameter" */
	_puts("\033[2J\033[H");
	return (1);
}
