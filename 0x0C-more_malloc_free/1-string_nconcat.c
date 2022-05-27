#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(sizeof(char) * (1 + strlen(s1) + strlen(s2)));
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);

	if (n >= strlen(s2))
		strcat(s, s2);
	else
		strncat(s, s2, n);
	return (s);
}
