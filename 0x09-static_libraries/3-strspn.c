#include <string.h>
/**
 * _strspn - get the length of a prefix substring
 * @s: initial segment
 * @accept: prefix
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = strspn(s, accept);

	return (l);
}
