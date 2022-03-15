#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - items for dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *strcpy(char *s1, char *s2);
int count(char *s);

#endif /*_DOG_H*/
