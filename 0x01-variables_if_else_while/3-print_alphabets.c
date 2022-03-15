#include <stdio.h>

/**
 * main - Entry point
 * Application: AlphABET
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	/*Print lowercase values*/
	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	/* Print uppercase values */
	i = 65;
	while (i < 90)
	{
		putchar(i);
		i++;
	}

	/* New line */
	putchar(10);

	return (0);
}
