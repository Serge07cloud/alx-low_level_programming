#include <stdlib.h>

/**
 * *_calloc - allocate memory using malloc
 * @nmemb: number of elements
 * @size: bytes of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
