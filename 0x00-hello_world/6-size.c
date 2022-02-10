#include <stdio.h>

/**
 * main - name of the function
 * char:bytes of a char
 * int:bytes of a int
 * long int:bytes of a long int
 * long long int:bytes of a long long int
 * float:bytes of a float
 * printf:command for print a text
 * Return:the function print and return 0
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
