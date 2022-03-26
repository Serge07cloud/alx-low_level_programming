#include <stdio.h>
/**
 * *rot13 - encode a string using rot13
 * @s: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char al1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char al2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;

		while (al1[j] != '\0')
		{
			if (*(s + i) == al1[j])
			{
				*(s + i) = al2[j];
				break;
			}
			j++;
		}

		i++;
	}
	return (s);
}
