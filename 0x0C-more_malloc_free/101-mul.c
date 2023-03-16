#include <stdio.h>
#include <stdlib.h>
/**
 * change - funclion to change string to long
 * @n: the string
 * Return: long pointer
 *
 */

long change(char *n)
{
	long i, num = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= '0' || n[i] <= '9')
		{
			num *= 10;
			num += n[i] - '0';
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (num);
}


#include <stdlib.h>
/**
 * main - a main functoin that to multiplY
 * @ac - argiment counter
 * @av - astring array
 * Return: 0 on success
 *
 */
int main(int ac, char *av[])
{
	long a, b;

	if (ac < 3 || ac > 3)
		exit(98);
	a = change(av[1]);
	b = change(av[2]);
	printf("%ld\n", a * b);
	return (0);
}
	
