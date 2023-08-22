 #include "shell.h"

/**
 * check_for_builtin - determines whether the command is builtin
 * @args: the list of arguments
 *
 * Return: If the command is a builtin, return 1, else 0
 */
int check_for_builtin(char **args)
{
	if (!args[0])
		return (0);
	if (!_strcmp(args[0], "exit"))
		shell_exit(args);
	else if (!_strcmp(args[0], "env"))
		shell_env();
	else if (!_strcmp(args[0], "setenv"))
		shell_setenv(args);
	else if (!_strcmp(args[0], "unsetenv"))
		shell_unsetenv(args);
	else if (!_strcmp(args[0], "help"))
		shell_help();
	else if (!_strcmp(args[0], "cd"))
		shell_cd(args);
	else if (!_strcmp(args[0], "clear"))
		shell_clear(args);
	else
		return (0);
	return (1);
}
