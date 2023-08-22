#include "shell.h"

static char *last_input;
/**
 * _input - Read the user's line of input.
 *
 * Return: Ptr pointing to a buffer containing the input from the user.
*/
char *get_input(void)
{
	char *input = NULL;
	size_t input_size = 0;
	ssize_t nread;

	do {
		/* prints the shell prompt */
		prompt();

		/* gets a line of user's input */
		nread = getline(&input, &input_size, stdin);

		/* checks for errors/End Of File */
		if (nread == -1)
		{
			free(input);
			_puts("\n");
			return (NULL);
		}

		/* get rid of trailing newline char */
		input[nread - 1] = '\0';

	} while (input[0] == '\0' || isspace(input[0]));

	/* updates the last_input so that it refers to the new input */
	last_input = input;
	return (input);
}

/**
 * free_last_input - Releases the user's most recent input.
 * 
 * The RAM alloted for the most recent input string entered by the user is
 * released by this function. Once the input string is no longer required
 * it should be called.
 */
void free_last_input(void)
{
	free(last_input);
	last_input = NULL;
}
