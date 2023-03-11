#include <stdio.h>
#include <stdlib.h>
/**
 * convert - function to convert a string to number
 * @n: the string
 * Return: the converted value or -1 if fail
 *
 */
int convert(char *n)
{
	int i = 0, num = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= '0' && n[i] <= '9')
		{
			num *= 10;
			num += n[i] - '0';
			i++;
		}
		else
			return (-1);
	}
	return (num);
}
/**
 * main - afunction that add numbers only
 * @argc: counter of argument
 * @argv: array of strings
 * Return: 0(Success)
 *
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			if (convert(argv[i])  != -1)
				sum += convert(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", sum);
	return (0);
}
