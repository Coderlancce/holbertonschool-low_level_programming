#include "main.h"

/**
 * create_array - name of the function
 * @size: size to put c
 * @c: char to change i size in *str
 * Return: changes if aplly
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (0);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
