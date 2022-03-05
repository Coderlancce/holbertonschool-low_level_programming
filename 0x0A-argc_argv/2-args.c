#include "main.h"

/**
 * main - name of the function
 * @argc: number of command line arguments
 * @argv: pointer to array content program command lines
 * Return: none
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
