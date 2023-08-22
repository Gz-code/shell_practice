#include "shell.h"

/**
 * _path - Returns the PATH environment variable's value.
 *
 * Return: A *ptr to the PATH's value.
 */
char *get_path(void)
{
	return (_getenv("PATH"));
}
