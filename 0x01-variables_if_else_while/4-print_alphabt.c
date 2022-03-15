#include <stdio.h>

/**
 * main - Entry point
 * Application: Alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	/* New line */
	putchar(10);
	return (0);
}
