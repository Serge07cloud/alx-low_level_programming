#include "main.h"
#include <stdio.h>
/**
 * print_number - print an integer
 * @n: number to print
 *
 * Return: nothing
 **/
void print_number(int n)
{
	int d, q, r;

	d = 10;
	q = n / d;
	r = n % d;

	if (q > 9)
		print_number(q);
	else
	{
		if (r < 0 && q < 0)
		{
			_putchar('-');
			q = q * (-1);
			r = r * (-1);
		}

		q = q + 48;
		r = r + 48;

		if (q == 48)
		{
			if (r == 48)
			{
				_putchar(48);
			}
			else
			{
				putchar(r);
			}
		}
		else
		{
			_putchar(q);
			_putchar(r);
		}
	}
}
