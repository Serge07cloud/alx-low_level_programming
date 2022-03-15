#include <stdio.h>

/**
 * main - Entry point
 * Application: Print lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	/* New line */
	putchar(10);

	return (0);
}
