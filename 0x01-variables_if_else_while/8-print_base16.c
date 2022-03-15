#include <stdio.h>

/**
 * main - Entry point
 * Application: Numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';

	while (i < '10')
	{
		putchar(i);
		i++;
	}

	/* Lowercase letters */
	i = 'A';

	while (i < 'G')
	{
		putchar(i);
		i++;
	}

	/* New line */
	putchar(10);

	return (0);
}
