#include <string.h>
/**
 * *_memcpy - Copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes to copy form src to dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = memcpy(dest, src, n);

	return (p);
}
