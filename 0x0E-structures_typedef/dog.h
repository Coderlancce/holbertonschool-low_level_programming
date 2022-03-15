#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - items for dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 */

struct dog {

  char *name;
  float age;
  char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*_DOG_H*/
