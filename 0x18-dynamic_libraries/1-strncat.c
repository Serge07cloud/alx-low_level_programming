#include <string.h>
/**
 * *_strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to consider
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
