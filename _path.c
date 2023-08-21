#include "shell.h"

/**
 * _path - Returns value of PATH env variable.
 *
 * Return: Pointer to value of $PATH.
 */
char *get_path(void)
{
	return (_getenv("PATH"));
}
