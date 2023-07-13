#include "kenya.h"

/**
 * tokenize - passing user input into arguments
 *            by splits an array string into tokens using a delimiter.
 * @str: the string to be tokenized.
 * @delim: the delimiter used to split the string.
 *
 * Return: an array of pointers to the tokens,
 *         or NULL if an error occurs.
 */
char **tokenize(char *str, const char *delim)
{
	char *to_token = NULL;
	char **ret = NULL;
	int i = 0;

	to_token = strtok(str, delim);
	while (to_token)
	{
		ret = realloc(ret, sizeof(char *) * (i + 1));
		if (ret == NULL)
			return (NULL);

		ret[i] = malloc(_strlen(to_token) + 1);
		if (!(ret[i]))
			return (NULL);

		_strcpy(ret[i], to_token);
		to_token = strtok(NULL, delim);
		i++;
	}
	/*increase the size of the array*/
	ret = realloc(ret, (i + 1) * sizeof(char *));
	if (!ret)
		return (NULL);

	ret[i] = NULL;
	return (ret);
}

/**
 * tokenize_input - splits a user input string into tokens that are in  tokenize() form.
 * @input: the user input string to be tokenized .
 *
 * Return: an array of pointers to the tokens, or NULL if an error occurs
 */
char **tokenize_input(char *input)
{
	char **tokenss = NULL;
	char *tmp = NULL;

	tmp = _strdup(input);
	if (tmp == NULL)
	{
		_puts("Memory allocation error\n");
		exit(EXIT_FAILURE);
	}

	tokenss = tokenize(tmp, " \t\r\n\a");
	free(tmp);

	return (tokenss);
}

