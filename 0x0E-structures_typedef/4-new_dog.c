#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - This function creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

		len1 = strlen(name);
		len2 = strlen(owner);

		dog->name = malloc(sizeof(char) * len1 + 1);
		dog->owner = malloc(sizeof(char) * len2 + 1);

		if (dog->name == NULL || dog->owner == NULL)
		{
			free(dog->name);
			free(dog->owner);
			free(dog);
			return (NULL);
		}
			strcpy((*dog).name, name);
			strcpy((*dog).owner, owner);
			(*dog).age = age;

			return (dog);
}
