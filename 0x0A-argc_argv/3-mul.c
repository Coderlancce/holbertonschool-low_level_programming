#include "main.h"

/**
 * main - name of the function
 * @argc: number of command line arguments
 * @argv: pointer to array content program command lines
 * Return: none
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (0);
	}
	return (printf("%d\n", atoi(argv[1]) * atoi(argv[2])));
}
