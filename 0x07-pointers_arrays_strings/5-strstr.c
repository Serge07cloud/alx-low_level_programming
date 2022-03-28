#include <string.h>
/**
 * *_strstr - Locates a substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to the beginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = strstr(haystack, needle);

	return (p);
}
