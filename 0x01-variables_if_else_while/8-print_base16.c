#include <stdio.h>

/**
 * main - Entry point
 * Application: Numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
	}

	i = 97;

	while (i < 103)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
