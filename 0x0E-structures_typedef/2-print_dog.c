#include "dog.h"

/**
 * print_dog - name of the function
 * @d: pointer content information of dog
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
