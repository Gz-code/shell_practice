#include "shell.h"

/**
 * prompt function will Print shell prompt to stdin.
 *
 * Return: Return type void.
 */
void prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
