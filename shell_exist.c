#include "shell.h"

/**
 * exist - Starts to verify if a file exist
 * @pathname: Specifies path to the file
 * Return: 0 on success or -1 if otherwise (Ends)
 */
int exist(char *pathname)
{
	int exist_stat;

	exist_stat = (open(pathname, O_RDONLY));
	if (exist_stat != -1)
	{
		close(exist_stat);
		return (0);
	}
	else
		return (-1);
}
