#include "kenya.h"

/**
 * t_sigint - Signal handler for SIGINT (Ctrl+C)
 * @sig: Signal number
 *
 * Return: Nothing
 */
void t_sigint(int sig)
{
	(void) sig;
	_putchar('\n');
	prompt();
}

/**
 *t_sigquit - Signal handler for SIGQUIT (Ctrl+\)
 * @sig: Signal number
 *
 * Return: Nothing
 */
void t_sigquit(int sig)
{
	(void) sig;
	_puterror("Quit (core dumped)\n");
	exit(EXIT_SUCCESS);
}

/**
 *t_sigstp - Signal handler for SIGTSTP (Ctrl+Z)
 * @sig: Signal number
 *
 * Return: Nothing
 */
void t_sigstp(int sig)
{
	(void) sig;
	_puts("\n");
	prompt();
}

