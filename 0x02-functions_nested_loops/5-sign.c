#include "main.h"
#include <stdio.h>
/**
 * print_sign - print the sign of a number
 * @n: integer parameter
 *
 * Return: integer
 **/
int print_sign(int n)
{
	int ans;

	if (n > 0)
	{
		_putchar('+');
		ans = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		ans = 0;
	}
	else
	{
		_putchar('-');
		ans = -1;
	}

	return (ans);
}
