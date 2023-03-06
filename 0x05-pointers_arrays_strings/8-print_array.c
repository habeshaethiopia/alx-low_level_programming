#include <stdio.h>
/**
 * print_array - function to print array
 * @a: the pointer points to array
 * @n: array size
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
			printf(", ");
	}
	printf("\n");
}
