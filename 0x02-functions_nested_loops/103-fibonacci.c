#include <stdio.h>

/**
 * main - name of the function
 * while: conditional for print
 * Return: Always 0.
 */

int main(void)
{
	long int total_sum, sum, one, two;

	total_sum = 0;
	sum = 0;
	one = 0;
	two = 1;

	while (sum < 4000000)
	{
		sum = one + two;
	if (sum % 2 == 0)
	{
		total_sum += sum;
	}
	one = two;
	two = sum;
	}
	printf("%li\n", total_sum);
	return (0);
}
