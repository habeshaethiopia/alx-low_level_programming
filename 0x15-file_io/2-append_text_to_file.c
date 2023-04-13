#include "main.h"
/**
 * append_text_to_file -  append atext at the end
 * @filename: the name of the file
 * @text_content: the appened text
 * Return: 1 or -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;
	int i, l = 0;

	fd = fopen(filename, "a");
	if (!fd)
		return (-1);
	while (text_content[l])
	{
		l++;
	}
	i = fwrite(text_content, 1, l, fd);
	if (i == -1)
		return (-1);
	fclose(fd);
	return (1);
}
