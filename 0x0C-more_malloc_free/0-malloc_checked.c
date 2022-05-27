#include <stdlib.h>

/**
 * *malloc_checked - function name
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(sizeof(int) * b);

	if (p == NULL)
		exit(98);
	return (p);
}
