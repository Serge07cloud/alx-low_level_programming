#include <stdio.h>

/**
 * main - Entry point
 * Application: Numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i == 10)
		{
			putchar(61);
		} else if (i == 11)
		{
			putchar(62);
		} else if (i == 12)
		{
			putchar(63);
		} else if (i == 13)
		{
			putchar(64);
		} else if (i == 14)
		{
			putchar(65);
		} else if (i == 15)
		{
			putchar(66);
		} else
		{
			putchar(i);
		}

		i++;
	}

	/* New line */
	putchar(10);

	return (0);
}
