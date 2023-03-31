#include <stdio.h>

/**
 * premain - execute before main
 *
 */
void _attribute_ ((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
