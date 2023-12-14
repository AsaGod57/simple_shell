#include "shell.h"

/**
 * _printp - Starts to print the prompt in the stdin
 * @prompt: Specifies pointer to the string
 * @size: Specifies the length of the prompt
 * Return: 0 on success or -1 if otherwise (Ends)
 */
int _printp(const char *prompt, unsigned int size)
{
	int written;

	if (isatty(STDIN_FILENO))
	{
		written = write(1, prompt, size);
		if (written == -1)
			return (-1);
	}
		return (0);
}
