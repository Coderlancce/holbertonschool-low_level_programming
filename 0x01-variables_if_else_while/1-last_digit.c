#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 *
 */

int main(void)
{
	int n, t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	h = n % 10;

	if(h < 6)
	  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, h);

	return (0);
}
