#include <stdio.h>

/**
 * main - Entry point
 * Application: Numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int p = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i);
		} else
		{
			if (i == 10)
			{
				p = 61;
			} else if (i == 11)
			{
				p = 62;
			} else if (i == 12)
			{
				p = 63;
			} else if (i == 13)
			{
				p = 64;
			} else if (i == 14)
			{
				p = 65;
			} else
				p = 66;

			putchar(p);
		}

		i++;
	}

	/* New line */
	putchar(10);

	return (0);
}
