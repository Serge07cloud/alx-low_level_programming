#include "main.h"

/**
 * print_triangle - function name
 * @size: integer param
 * Description: function that print a triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			j = size - i;
			while (j--)
			{
				_putchar(' ');
			}

			for (k = 0; k < i; k++)
				_putchar('#');

			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
