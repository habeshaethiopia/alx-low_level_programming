#include "main.h"
/**
 * create_file - function to creat afile
 * @filename: the name of the file
 * @text_content: the info in the file
 * Return: 1 or -1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		wr = write(fd, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
