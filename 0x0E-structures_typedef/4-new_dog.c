#include "dog.h"

/**
 * new_dog - name of the function
 * @name: pointer with name
 * @age: age of the dog
 * @owner: name of the owner
 * Return: none
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));
	if (!dog2)
		return (NULL);

	dog2->name = name;
	dog2->age = age;
	dog2->owner = owner;

	return (dog2);
}
