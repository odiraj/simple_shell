#include "kenya.h"

/**
 * exit - Exit the shell.
 * @args: Arguments.
 *
 * Return: Nothing.
 */
void exit(char **args)
{
	int status = 0;

	if (args[1] != NULL)
	{
		status = _atoi(args[1]);
	}
	free_tokens(args);
	free_last_input();
	exit(status);
}

