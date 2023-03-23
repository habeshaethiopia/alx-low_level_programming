#include<stdio.h>
#include<stdlib.h>
/**
 * main - main function
(* a blank line
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa)?
* Return: 0 in succes
*/
int main(int argc, char *argv[])
{
	int i, x;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < x; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < x - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
