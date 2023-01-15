#include <stdlib.h>
/**
 * free_grid - Function that frees 2 dimensional array
 * @grid: grid
 * @height: height of array
 * Return: always 0 success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
