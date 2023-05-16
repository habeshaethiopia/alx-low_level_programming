#include "main.h"
/**
 * main -  program that copies the content of a file to another file.
 * @ac: counter
 * @av: the string
 * Return: 1(success)
 *
 */
int main(int ac, char **av)
{
	size_t x, y;
	FILE *or, *cp;
	char *buff = malloc(sizeof(char) * 1024);
	size_t n  = 0;

	if (!buff)
		return (0);
	if (ac != 3)
	{
		free(buff);
		dprintf(1, "Usage:.// cp file_from file_to\n");
		exit(97);
	}
	or = fopen(av[1], "r");
	if (!or)
	{
		dprintf(2, "Error: Can't read from %s \n", av[1]);
		free(buff);
		exit(98);
	}
	cp = fopen(av[2], "w+");
	if (!cp)
	{
		dprintf(2, "Error: Can't write to %s \n", av[2]);
		free(buff);
		exit(99);
	}
	while ((x = getline(&buff, &n, or)) != -1)
	{
		y = fwrite(buff, n, 1, cp);
	}
	x = fclose(or);
	if (x != 0)
		dprintf(2, "Error: Can't close fd %lu", x);
	y = fclose(cp);
	if (y != 0)
		dprintf(2, "Error: Can't close fd %lu", y);

	return (0);
}
