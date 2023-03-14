#include <stdlib.h>
/**
 * alloc_grid - is afunction to return two dimentional array
 * @height: var
 * @width: var
 * Return: two dimentional array
 *
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}
