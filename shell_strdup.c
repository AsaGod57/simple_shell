#include "shell.h"

/**
 * _strdup - Starts to duplicate a string
 * @str: Specifies string to be duplicated
 * Return: The pointer to the duplicated string (Ends)
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	duplicate = (char *) malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
