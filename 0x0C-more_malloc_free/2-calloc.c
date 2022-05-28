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
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (size == sizeof(char))
	{
		p = malloc(nmemb * sizeof(*p) + 1);
		if (p == NULL)
			return (NULL);

		for (i = 0; i < nmemb; i++)
			p[i] = 0;
		return (p);
	}
	else
	{
		ptr = malloc(nmemb * size);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < nmemb; i++)
			ptr[i] = 0;
		return (ptr);
	}
}
