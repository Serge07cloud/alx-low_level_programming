#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function name
 * @str: string to be duplicated
 * Return: pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * strlen(str) + 1);
	if (s == NULL)
		return (NULL);
	return (strcpy(s, str));
}
