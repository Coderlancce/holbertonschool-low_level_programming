#include <stdio.h>

/**
 * main - name of the function
 * for: cicle of numbers and lowercase
 * Return: 0
 */

int main(void)
{
	int numbers, lowercase;

	for (numbers = 48; numbers < 58; numbers++)
		putchar(numbers);
	for (lowercase = 97; lowercase < 103; lowercase++)
		putchar(lowercase);

	putchar('\n');
	return (0);
}
