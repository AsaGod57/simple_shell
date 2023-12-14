#include "shell.h"

/**
 *free_grid - Starts to free the allocated memory used
 *@grid: Specifies pointer to grid
 *@heigth: Specifies the heigth of the grid
 */
void free_grid(char **grid, int heigth)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	while (i < heigth)
	{
		free(grid[i]);
		i++;
	}
}
