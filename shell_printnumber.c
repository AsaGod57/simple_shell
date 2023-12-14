#include "shell.h"

/**
 * print_numbers - Starts to print numbers used for the error message
 * @n: Specifies number to print
 * Return: The number (Ends)
 */
int print_numbers(int n)
{
	unsigned int number;
	int i = 0;

	if (n < 0)
	{
		number = -n;
		i = i + _putchar('-');
	}
	else
	{
		number = n;
	}
	if (number / 10 != '\0')
		i = i + print_numbers(number / 10);
	i = i + _putchar(number % 10 + '0');
	return (i);
}
