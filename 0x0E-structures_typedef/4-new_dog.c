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

	store_name = malloc(sizeof(char) * (strlen(name) + 1));
	store_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	d = malloc(sizeof(dog_t));

	if (d == NULL || store_name == NULL || store_owner == NULL)
	{
		return (NULL);
	}
	strcpy(store_name, name);
	strcpy(store_owner, owner);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
