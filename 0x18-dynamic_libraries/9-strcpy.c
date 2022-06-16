#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - function that copy string
 * @src: pointer to source string
 * @dest: pointer to destination string
 *
 * Return: pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
