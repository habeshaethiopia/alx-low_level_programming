#include "main.h"
/**
 * main - copy one file to another
 * @ac: the counter
 * @av: the names of the file
 * Return: 1 or 0
 *
 */
int main(int ac, char **av)
{
	int s, d, i, _read;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	s = open(*(av + 1), O_RDONLY);
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(av + 1));
		exit(98);
	}
	d = open(*(av + 2), O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((_read = read(s, buffer, 1024)) > 0)
	{
		if (d == -1 || (write(d, buffer, _read) != _read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(av + 2));
			exit(99);
		}
	}
	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(av + 1));
		exit(98);
	}
	i = close(s);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", s), exit(100);
	}
	i = close(d);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", s), exit(100);
	}
	return (0);
}
