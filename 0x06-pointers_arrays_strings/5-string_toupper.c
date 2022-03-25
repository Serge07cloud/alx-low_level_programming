#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - convert to uppercase
 * @c: string to convert
 *
 * Return: converted char
 **/
char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		*(c + i) = toupper(*(c + i));
		i++;
	}

	return (c);
}
