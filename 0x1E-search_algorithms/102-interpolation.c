# include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array of integers
 * using interpolation search algorithm
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in "array".
 * @value: value to search for.
 * 
 * Return: index where 'value' is located,
 * -1 if 'value' is not present int 'array',
 * -1 if array is NULL.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = 0;
	size_t pos = 0;
	high = size - 1;

	if (!array)
		return (-1);

	while (value != array[pos])
	{
		pos = (double)(high - low);
		pos /= (array[high] - array[low]);
		pos *= value - array[low];
		pos += low;
		if (size < pos)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low++;

		else if (array[pos] > value)
			low--;
		}
	
		return (pos);
}
