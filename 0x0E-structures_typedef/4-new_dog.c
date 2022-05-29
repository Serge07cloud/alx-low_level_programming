#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
