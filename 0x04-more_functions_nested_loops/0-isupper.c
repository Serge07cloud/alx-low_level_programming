#include <ctype.h>

/**
 * _isupper - function name
 * Description: Checks for uppercase character
 * @c: integer param
 *
 * Return: integer
 */

int _isupper(int c)
{
	return (isupper(c) != 0 ? 1 : 0);
}
