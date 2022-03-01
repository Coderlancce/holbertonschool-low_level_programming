#include "main.h"

/**
 * print_diagsums - name of the fuction
 * @a: pointer to array
 * @size: size of array to sum
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j, k = 0, l = 0;

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			if (i == j)
				k = k + a[(size + 1) * i];
			if (i + j == size - 1)
				l = l + a[(size - 1) * (i + 1)];
			j++;
		}
		i++;
	}
	printf("%d, %d\n", k, l);
}
