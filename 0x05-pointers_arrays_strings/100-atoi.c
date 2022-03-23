#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, p, n;

	i = 0;
	n = 0;
	p = 0;

	while (*(s + i) != '\0' && n == 0)
	{
		if (*(s + i) != '-')
		{
			n = atoi(s + i);

			if ((p % 2) != 0)
				n = n * (-1);
		}
		else
			p++;

		i++;
	}

	return (n);
}
