#include "holberton.h"

/**
 * read_textfile - read text file and write
 * @filename: resource to read
 * @letters: number of characters to read
 *
 * Return: what read the function or 0 if some error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, new_read, new_write;
	char *s;

	if (!filename)
		return (0);

	s = malloc(letters * sizeof(char) + 1);
	if (!s)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}
	new_read = read(fd, s, letters);
	if (new_read == -1)
	{
		free(s);
		return (0);
	}
	new_write = write(STDOUT_FILENO, s, letters)
	if (new_write == -1)
	{
		free(s);
		return (0);
	}
	close(fd);
	free(s);
	if (new_read == new_write)
		return (new_write);

	return (0);
}
