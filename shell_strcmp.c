#include "shell.h"

/**
 * _strcmp - Starts to compare two strings
 * @str1: Specifies 1st string to be compared
 * @str2: Specifies 2nd string to be compared
 * Return: 0 if  same, > 0 if str1 is greater, < 0 if str2 is greater
 */
int _strcmp(char *str1, char *str2)
{
	int a;

	for (a = 0; str1[a] != '\0'; a++)
		;
	for (a = 0; str2[a] != '\0'; a++)
	{
		if (str1[a] != str2[a])
		{
			return (str1[a] - str2[a]);
		}
	}
	return (0);
}
