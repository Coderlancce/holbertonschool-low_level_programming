#include "dog.h"

/**
 * init_dog - name of the function
 * @d: pointer adress
 * @name: pointer with name of dog
 * @age: age of dog
 * @owner: pointer with name owner of dog
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
