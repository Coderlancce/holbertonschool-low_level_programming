#include "main.h"

/**
 * free_grid - name of the function
 * @grid:doble pointer to array
 * @height: value of height
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i];

	free(grid);
}
