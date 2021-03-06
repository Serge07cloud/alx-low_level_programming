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
	if (n >= strlen(s2))
		s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	else
		s = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);
	strncat(s, s2, n);

	return (s);
}
