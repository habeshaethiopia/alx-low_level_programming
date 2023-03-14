#include <stdlib.h>
/**
 * free_grid - function that free the allocated memory
 * @grid: is the double array
 * @height: the height of the array
 *
 */
void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i < height; i++)
		if (grid[i] != NULL)
			free(grid[i]);
	free(grid);

}

