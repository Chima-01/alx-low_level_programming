#include <stdio.h>
#include "dog.h"

/**
 * print_dog - This function prints a struct dog
 * @d:P pointer to the addresses of data type in struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("name:(nil)\n");
	else
	{
		printf("name: %s\n", (*d).name);
	}
		printf("age: %f\n", (*d).age);
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
