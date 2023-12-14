#include "shell.h"

/**
 * last_free - Starts to free the memory
 * @entry: Specifies input typed by the user
 */
void last_free(char *entry)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(entry);
	}
	if (!isatty(STDIN_FILENO))
		free(entry);
}
