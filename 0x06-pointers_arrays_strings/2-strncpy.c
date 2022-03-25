#include <string.h>
/**
 * *_strncpy - function to copy a string
 * @dest: destination string
 * @src: source string
 * @n: first n bytes of the source string
 **/
char *_strncpy(char *dest, char *src, int n)
{
	char *s = strncpy(dest, src, n);

	return (s);
}
