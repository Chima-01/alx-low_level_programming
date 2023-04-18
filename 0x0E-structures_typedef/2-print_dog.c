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

	if (d->name == NULL)
		printf("Name:(nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
