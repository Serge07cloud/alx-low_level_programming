#include "main.h"

/**
 * print_line - function name
 * @n: integer parameter, number of line
 * Description : function that draws a straight line in the terminal
 *
 * Return: nothing
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar('_');
	}

	_putchar('\n');
}
