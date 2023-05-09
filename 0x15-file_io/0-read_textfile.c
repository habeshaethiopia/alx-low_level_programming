#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: filename
 * @letters: num of chars
 * Return: actual number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int r, w, o;
	char *buff = malloc(sizeof(char) * letters);

	if (!buff || !filename)
	{
		free(buff);
		return (0);
	}
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buff);
		return (0);
	}
	r = read(o, buff, letters);
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	w = write(1, buff, r);
	if (w != r || w == -1)
	{
		return (0);
	}
	else
		free(buff);
	close(o);
	return (w);
}
