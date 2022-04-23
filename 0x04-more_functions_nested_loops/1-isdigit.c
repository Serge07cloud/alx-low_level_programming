#include <ctype.h>

/**
 * _isdigit - function name
 *  @c: integer param
 *  Description: A function that checks for a digit (0 through 9)
 *
 * Return: integer value 1 if @c is a digit, 0 if not
 */

int _isdigit(int c)
{
	return (isdigit(c) != 0 ? 1 : 0);
}
