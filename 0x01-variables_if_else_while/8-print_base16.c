#include <stdio.h>

/**
 * main - Entry point
 * Application: Numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 30;
	
	while (i < 40)
	{
		putchar(i);
		i++;
	}

	/* Lowercase letters */
	i = 61;

	while (i < 67)
	{
		putchar(i);
		i++;
	}

	/* New line */
	putchar(10);

	return (0);
}
