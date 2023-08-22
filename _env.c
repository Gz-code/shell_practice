#include "shell.h"

/**
 * _env - Acquire the value of an environment variable
 * @name: Contains the name of the environment variable
 *
 * Return: NULL if the value of the environment variable does not exist
 */
char *_getenv(const char *name)
{
	char **env;
	size_t name_len = _strlen(name);

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
		{
			return (&(*env)[name_len + 1]);
		}
	}

	return (NULL);
}
