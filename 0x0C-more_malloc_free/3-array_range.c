#include "main.h"

/**
 * array_range - name of the function
 * @min: range min
 * @max: range max
 * Return: NULL if min > max or new pointer
 */

int *array_range(int min, int max)
{
	int *str, k;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		*(str + k) = min;

	return (str);
}
