#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: file name
 * @text_content: content of the text
 * Return: 1 0r -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;

	if (!filename)
		return (-1);
	fd = fopen(filename, "a+");
	if (!fd)
		return (-1);
	if (!text_content)
		return (1);
	fprintf(fd, "%s", text_content);
	return (1);
}
