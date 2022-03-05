#include "main.h"
#include <stdlib.h>

/**
 * main - name of the function
 * @argc: number of command line arguments
 * @argv: pointer to array content program command lines
 * Return: none
 */
int main(int argc, char *argv[])
{
	int n_change = 0;
	int change[] = {25, 10, 5, 2, 1};
	int cents, i;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
		printf("%d\n", 0);

	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cents >= change[i] && cents != 0)
			{
				n_change += cents / change[i];
				cents -= change[i] * (cents / change[i]);
			}
		}
		printf("%d\n", n_change);
	}
	return (0);
}
