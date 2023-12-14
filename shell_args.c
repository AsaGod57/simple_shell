#include "shell.h"

/**
 * fill_args - Starts to fill an array
 * @entry: Specifies a string with the input
 * @arguments: Specifies array to be filled
 * Return: The length of the array (Ends)
 */
int fill_args(char *entry, char **arguments)
{
	int i = 0;
	char *options, *aux = entry, *command;

	command = strtok(entry, "\n\t\r ");
	arguments[i] = command;
	while (aux != NULL)
	{
		++i;
		options = strtok(NULL, "\n\t\r ");
		aux = options;
		arguments[i] = options;
	}
	arguments[i] = NULL;
	return (i);
}
