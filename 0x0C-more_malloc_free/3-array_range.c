#include <stdlib.h>

/**
 * *array_range - Creates array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i;

	int dif = max - min;

	if (dif < 0)
		return (NULL);
	p = malloc(sizeof(int) * (dif + 1)); /* min and max values are included */
	if (p == NULL)
		return (NULL);
	for (i = 0; i < dif + 1; i++)
	{
		p[i] = min + i;
	}
	return (p);

}
