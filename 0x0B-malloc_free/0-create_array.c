#include <stdlib.h>
/**
 * *create_array - function name
 * @size: size of array
 * @c: caracter
 * Description: Create an array of char and initialize it with a specific char
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	return (array);

}
