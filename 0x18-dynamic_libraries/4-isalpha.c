#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isalpha - cheks for alphabetic character
 * @c: integer variable
 *
 * Return: integer
 */
int _isalpha(int c)
{
	int ans;

	if (isalpha(c) != 0)
		ans = 1;
	else
		ans = 0;

	return (ans);
}
