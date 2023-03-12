#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum amount of coin
 * @argc: counter
 * @argv: string array
 * Return: 0(Success) or 1(fail)
 */
int main(int argc, char *argv[])
{
	int bir;
	int cent = 0;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 2)
		bir = atoi(argv[1]);
	while (bir >= 25)
	{
		cent++;
		bir -= 25;
	}
	while (bir >= 10)
	{
		cent++;
		bir -= 10;
	}
	while (bir >= 5)
	{
		cent++;
		bir -= 5;
	}
	while (bir >= 2)
	{
		cent++;
		bir -= 2;
	}
	while (bir > 0)
	{
		cent++;
		bir -= 1;
	}
	if (bir == 0)
		printf("%d\n", cent);


	return (0);
}
