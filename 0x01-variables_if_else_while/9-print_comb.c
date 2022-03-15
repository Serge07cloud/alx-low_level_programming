#include <stdio.h>

/**
 * main - Entry point
 * Application: Combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			/* Add comma */
			putchar(44);

			/* Add space */
			putchar(32);
		} else
		{
			/* Line feed */
			putchar(10);
		}

		i++;
	}

	return (0);
}
