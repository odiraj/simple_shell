#include "kenya.h"

/**
 * env - Prints all the environment variables.
 *
 * Return: void.
 */
int env(void)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		_puts(environ[i]);
		_putchar('\n');
	}

	return (0);
}

