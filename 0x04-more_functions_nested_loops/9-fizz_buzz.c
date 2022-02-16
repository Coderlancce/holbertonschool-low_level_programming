#include <stdio.h>

/**
 * main - name of the function
 * Return: none
 */

int main(void)
{
	int num;

	for(num = 1; num < 101; num++)
	{
		if(num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if(num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if(num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		printf("%d ", num);
	}
	putchar('\n');
	return (0);
}
