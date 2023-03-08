#include <stdbool.h>
#include "main.h"
/**
 * _atoi - function
 * @s: char pointer
 * Return: the converted num
 *
 */
int _atoi(char *s)
{
	int i, minus, val;
	bool ch = false;

	minus = -1;
	val = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] ==  '-')
			minus *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			val *= 10;
			val -= s[i] - '0';
			ch = true;
		}
		else if (ch)
			break;
	}
	val *= minus;
	return (val);
}

