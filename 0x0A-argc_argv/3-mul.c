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
	int mul;

	if (argc < 3 )
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
