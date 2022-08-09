#include "search_algos.h"

/**
 *
 *
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (0);

	for (i = 0; i <= size + 3; i += 3)
	{
		if (value <= array[i] || !array[i + 1])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i-3, i);
			break;
		}
	        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	for (i -= 3; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}

	return (-1);
}
