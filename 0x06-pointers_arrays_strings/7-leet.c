#include <stdio.h>
/**
 * *leet - Encode a string
 * @s: String to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;
	int j;

	char l[] = "aeotlAEOTL";
	char n[] = "4307143071";

	i = 0;
	while (l[i] != '\0')
	{
		j = 0;
		while (*(s + j) != '\0')
		{
			if (*(s + j) == l[i])
			{	
				*(s + j) = *(n + i);
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (s);
}
