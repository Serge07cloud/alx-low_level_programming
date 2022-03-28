#include <string.h>
/**
 * *_memset - function that fills the n bytes of the memory
 * area pointed by s with the constant b
 * @n: number of bytes to fill
 * @s: pointer to memory area
 * @b: constant
 *
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = memset(s, b, n);

	return (p);
}
