#include "main.h"

/**
 * append_text_to_file - add text to end file
 * @filename: file name to insert text
 * @text_content: text to insert in the file
 *
 * Return: 1 if success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, new_write, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	new_write = write(fd, text_content, len);
	if (new_write == -1)
		return (-1);

	close(fd);

	return (1);
}
