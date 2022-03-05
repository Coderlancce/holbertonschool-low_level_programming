#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - name of the function
 * @argc: number of command line arguments
 * @argv: pointer to array content program command lines
 * Return: none
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	printf("0\n");
	return (0);
}
