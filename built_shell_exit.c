#include "shell.h"

/**
 * shell_exit - Makes an exit from the shell.
 * @args: List of arguments.
 *
 * Return: 0 (success).
 */
void shell_exit(char **args)
{
	int status = 0;

	if (args[1] != NULL)
	{
		status = _atoi(args[1]);
	}
	free_tokens(args);
	free_last_input();
	exit(status);
}
