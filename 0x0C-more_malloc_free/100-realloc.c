#include "main.h"

/**
 * _realloc - name of the function
 * @ptr: pointer to old array
 * @old_size: old size of ptr
 * @new_size: new size of ptr
 * Return: conditions if posible new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *v = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		s[i] = v[i];

	free(ptr);
	return (s);
}
