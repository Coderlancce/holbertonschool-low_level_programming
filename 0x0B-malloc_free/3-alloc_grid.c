#include "main.h"

/**
 * alloc_grid - name of the function
 * @width: value of width
 * @height: value of height
 * Return: 0 if get NULL or new reservation space of **a
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * heigth);

	for (i = 0; i < heigth; i++)
		a[i] = malloc(sizeof(int) * width);

	for (i = 0; i < heigth; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
