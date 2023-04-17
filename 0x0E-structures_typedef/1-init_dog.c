#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - This function initializes the bio-data of a dog
 * @d: a pointer to the memory address of dog initialised
 * @name: name of dog
 * @age: age of dog
 * @owner: =owner of the dog name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dog = d;

	dog = malloc(sizeof(struct dog));
	if (dog != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
