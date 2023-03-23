#include "3-calc.h"
/**
 * op_add - add two numbers
 * @a: num 1
 * @b: num 2
 * Return: their sum
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substruct two numbers
 * @a: num 1
 * @b: num 2
 * Return: their result
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  multiplay two nums
 * @a: num 1
 * @b: num 2
 * Return: their result
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide two nums
 * @a: num 1
 * @b: num 2
 * Return: their result
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function to compute modules
 * @a: num 1
 * @b: num 2
 * Return: their result
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
