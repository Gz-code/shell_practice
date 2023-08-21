#include "shell.h"

/**
 * free- frees allocated pointers tracing system error
 * @argv: *ptr to *ptr to an array of pointers
 * @arg: *ptr to a *ptr to an array of chars
 *
 * Return: void
 */
void free_error(char **argv, char *arg)
{
	int i;

	for (i = 0; argv[i]; i++)
		free(argv[i]);
	free(argv);
	free(arg);
	exit(EXIT_FAILURE);
}

/**
 * free_tokens function - frees dynamically allocated mem by tokenize()
 * @ptr: pointer to allocated mem
 *
 * Return: void.
 */
void free_tokens(char **ptr)
{
	int i;

	for (i = 0; ptr[i]; i++)
		free((ptr[i]));
	free(ptr);
}


/**
 * free_path function - Frees global variable holding the PATH env
 *              variable value
 *
 * Return: NULL
 */
void free_path(void)
{
	if (environ != NULL)
	{
		size_t i = 0;

		while (environ[i] != NULL)
		{
			if (_strncmp(environ[i], "PATH=", 5) == 0)
			{
				free(environ[i]);
				environ[i] = NULL;
				break;
			}
			i++;
		}
	}
}
