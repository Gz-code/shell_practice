#include "shell.h"

/**
 * shell_cd - modifies the shell's current working directory
 * @args: A list of arguments
 */
void shell_cd(char **args)
{
	char *dir = args[1];
	int ret;

	/* The HOME directory should be changed if no argument is given */
	if (dir == NULL)
	{
		dir = _getenv("HOME");
		if (dir == NULL)
		{
			_puts("cd: No HOME directory found\n");
			return;
		}
	}

	ret = chdir(dir);
	if (ret == -1)
	{
		perror("cd");
	}
}
