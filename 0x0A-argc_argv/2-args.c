#include <stdio.h>

/**
 * main - afunction that prints arguments passed
 * @argc: counter of argument
 * @argv: array of strings
 * Return: 0(Success)
 *
 */
int main(int argc, char *argv[])
{
	int c = argc, i = 0;

	while (i < c)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
