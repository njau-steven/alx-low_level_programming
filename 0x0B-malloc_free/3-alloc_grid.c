#include <stdlib.h>
/**
 * **alloc_grid - Function that returns pointer to 2 dimensional array
 * @height: height of array
 * @width: width of array
 * Return: Always 0 success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	i = j = 0;

	if (height < 1)
		return (NULL);
	p = (int **)malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
