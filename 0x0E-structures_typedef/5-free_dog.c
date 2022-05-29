#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - free memory allocated for a dog element
 * @d: param of type dog_t
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}