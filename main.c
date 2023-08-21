#include "shell.h"

/**
 * main - The code executes a simple shell
 *
 * Return: EXIT_SUCCESS.
 */
int main(void)
{
	char *input;
	char **args;
	int status;

	/* Signal handlers */
	signal(SIGINT, handle_sigint);
	signal(SIGQUIT, handle_sigquit);
	signal(SIGTSTP, handle_sigstp);

	do {
		input = get_input();
		if (!input || !*input)/* If End of File (EOF) detected, exit the loop */
			break;

		args = tokenize_input(input);
		if (!args || !*args)
		{
			free(input);
			free_tokens(args);
			continue;
		}
		status = execute(args);
		free(input);
		free_tokens(args);

		/* if status is set to 1 continue the loop */
		status = 1;
	} while (status);

	return (EXIT_SUCCESS);
}
