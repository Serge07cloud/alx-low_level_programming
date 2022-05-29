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
	char *store_name;
	char *store_owner;

	store_owner = malloc(sizeof(char) * (1 + strlen(owner)));
	store_name = malloc(sizeof(char) * (1 + strlen(name)));
	d = malloc(sizeof(dog_t));

	if (d == NULL || store_name == NULL || store_owner == NULL)
	{
		return (NULL);
	}
	strcpy(store_name, name);
	strcpy(store_owner, owner);
	d->name = store_name;
	d->age = age;
	d->owner = store_owner;

	return (d);
}
