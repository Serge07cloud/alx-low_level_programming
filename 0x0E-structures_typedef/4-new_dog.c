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
	struct dog *d;
	char *store_name;
	char *store_owner;

	store_name = malloc(sizeof(char) * (1 + strlen(name)));
	store_owner = malloc(sizeof(char) * (1 + strlen(owner)));

	store_name = name;
	store_owner = owner;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		free(store_name);
		free(store_owner);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
