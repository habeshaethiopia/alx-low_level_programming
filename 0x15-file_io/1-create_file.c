#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: the contents of the file
 * Return: the number of biyte write
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		dprintf(fd, "%s", text_content);

	return (1);
}

