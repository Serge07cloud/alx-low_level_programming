#include <stdio.h>

/**
 * main - Entry point
 * Application: Numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters[16] = {'0', '1', '2', '3', '4', '5', '6',
		'7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int i = 0;

	while (i < 16)
	{
		putchar(letters[i]);
		i++;
	}

	putchar(10);

	return (0);
}
