#include <stdlib.h>
/**
 * array_range - afunction produce array contain from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: int array
 *
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max ; min++, i++)
		p[i] = min;

	return (p);
}
