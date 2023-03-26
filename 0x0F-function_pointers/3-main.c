#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to test other 3
 * @ac: argument counter
 * @av: double pointer
 * Return: 0 success
 *
 */
int main(int ac, char **av)
{
	int a, b;
	int (*fun)(int, int);

	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);

		fun = get_op_func(av[2]);

		if (fun == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", fun(a, b));
	}
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
