#include "shell.h"

/**
 * _strlen - Starts to get the length of a string
 * @string: Specifies string to be sized
 * Return: The length of the string (Ends)
 */
int _strlen(const char *string)
{
	int length = 0;

	if (string == NULL)
		return (0);

	while (string[length] != '\0')
		length++;
	return (length);
}
