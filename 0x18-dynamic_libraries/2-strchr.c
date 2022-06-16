#include <string.h>
/**
 * *_strchr - search occurence of c in string s
 * @s: string provided
 * @c: character to search for
 *
 * Return: pointer to first occurence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *p = strchr(s, c);

	return (p);
}
