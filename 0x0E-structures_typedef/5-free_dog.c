#include "dog.h"

/**
 * free_dog - name of the function
 * @d: pointer to information dog
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
