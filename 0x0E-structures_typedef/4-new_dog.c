#include "dog.h"

/**
 * cpystr - name of the function
 * @s1: pointer to clear table
 * @s2: pointer to white table
 * Return: s1 with information s2
 */

char *cpystr(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i]; i++)
		s1[i] = s2[i];

	s1[i] = '\0';
	return (s1);
}


/**
 * count - name of the function
 * @s: pointer to information
 * Return: number of strings
 */

int count(char *s)
{
	int a;

	for (a = 0; s[a]; a++)
		;

	return (a);
}


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

	if (!name || !owner || age < 0)
		return (NULL);
	dog2 = malloc(sizeof(dog_t));
	if (!dog2)
		return (NULL);

	dog2->name = malloc(count(name) + 1);
	if (!dog2->name)
	{
		free(dog2);
		return (NULL);
	}

	dog2->owner = malloc(count(owner) + 1);
	if (!dog2->owner)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	dog2->name = cpystr(dog2->name, name);
	dog2->age = age;
	dog2->owner = cpystr(dog2->owner, owner);

	return (dog2);
}
