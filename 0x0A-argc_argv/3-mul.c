#include <stdio.h>
#include <stdlib.h>
/**
 * main - afunction that prints its name
 * @argc: counter of argument
 * @argv: array of strings
 * Return: 0(Success)
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 3 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("%d\n", atoi(argv[1]));
	return (0);
}
