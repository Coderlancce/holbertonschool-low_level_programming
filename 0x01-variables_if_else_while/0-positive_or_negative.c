#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - name of the function
 * if: print if first condition its true
 * else if: print if second condition its true
 * else: if nothing condition its true print this
 * Return: i dont want return, its 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%i is negative\n", n);
	else if (n > 0)
		printf("%i is positive\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
