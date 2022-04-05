#include "main.h"

/**
 * create_file - create a file with text int
 * @filename: file name
 * @text_content: text to file
 *
 * Return: 1 if success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, new_write, len;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	new_write = write(fd, text_content, len);
	if (new_write == -1)
		return (-1);

	close(fd);

	return (1);
}
