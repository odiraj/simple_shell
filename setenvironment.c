#include "kenya.h"

/**
 * setenvironment - Set the value of an environment variable
 * @args: Arguments (name and value of the environment variable)
 *
 * Return: Nothing
 */
int setenvironment(char **args)
{
	char *name, *value;

	if (args[1] == NULL || args[2] == NULL)
	{
		_puterror("Usage: setenvironment VARIABLE VALUE\n");
		return (-1);
	}

	name = args[1];
	value = args[2];

	if (setenvironment(name, value, 1) != 0)
	{
		_puterror("setenvironment");
		return (-1);
	}
	return (0);
}

/**
 * unsetenvironment - Unset an environment variable
 * @args: Arguments (name of the environment variable)
 *
 * Return: Nothing
 */
int unsetenvironment(char **args)
{
	char *name;

	if (args[1] == NULL)
	{
		_puterror("Usage: unsetenvironment VARIABLE\n");
		return (-1);
	}

	name = args[1];

	if (unsetenvironment(name) != 0)
	{
		_puterror("unsetenv");
	}
	return (0);
}

