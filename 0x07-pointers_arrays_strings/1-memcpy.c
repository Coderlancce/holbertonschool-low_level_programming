#include "main.h"

/**
 * _memcpy - name of the function
 * @dest: dest of src
 * @src: source to copy to dest
 * @n: number of changes of src to dest
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);

	return (dest);
}
