#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type dog
 * @d: pointer to variable of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
