#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: pointer to string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char tmp;

	unsigned int long i, len;
	i = 0;
	len = strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + strlen(s) - 1 - i);
		*(s + strlen(s) - 1 - i) = tmp;

	}
}
