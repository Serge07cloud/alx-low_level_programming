#include <math.h>

/**
 * _pow_recursion - function name
 * @x: integer param - number to be raised
 * @y: integer param - power
 * Description : give the value of x raised to the power of y
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	return (pow(x, y));
}