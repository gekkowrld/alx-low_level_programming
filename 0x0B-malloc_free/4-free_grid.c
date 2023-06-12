# include "main.h"

/**
 * free_grid - A function that frees up the memory that was allocated
 * in the previous grid exercise
 * @grid: The previously created grid
 * @height: The height of the grid
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
