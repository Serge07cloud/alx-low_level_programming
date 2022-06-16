#include <string.h>
/**
 * *_strpbrk - Search a string for any set of bytes
 * @s: main string
 * @accept: string to look for in s
 *
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = strpbrk(s, accept);

	return (p);
}
