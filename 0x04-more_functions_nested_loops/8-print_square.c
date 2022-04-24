#include "main.h"

/**
 * print_square - function name
 * @size: integer param, size of the square
 * Description: function that print a square followed by a new line
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
