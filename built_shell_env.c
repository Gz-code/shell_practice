#include "shell.h"

/**
 * shell_env - Displays all environment variable strings  
 *
 * Return: O (success).
 */
int shell_env(void)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		_puts(environ[i]);
		_putchar('\n');
	}

	return (0);
}
