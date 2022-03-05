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
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (0);
}
