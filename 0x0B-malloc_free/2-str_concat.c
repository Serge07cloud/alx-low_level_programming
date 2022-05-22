#include <stdlib.h>
#include <string.h>
/**
 * char *str_concat - Concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 2));
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);
	return (strcat(s, s2));
}
