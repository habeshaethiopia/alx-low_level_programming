#include <stdio.h>
/**
 * print_diagsums - the function which prints the sum of the two diagonal
 * @a: the squre matrix
 * @size: size of squre matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i, sumd1 = 0, sumd2 = 0, j, counter = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumd1 += a[counter];
			if (i + j == size - 1)
				sumd2 += a[counter];
			counter++;
		}
	printf("%d, %d\n", sumd1, sumd2);
}
