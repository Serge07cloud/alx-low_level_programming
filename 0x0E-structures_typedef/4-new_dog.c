#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
