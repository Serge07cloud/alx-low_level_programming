#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - cheks for lowercase character
 * @c: int param
 *
 * Return: integer
 **/
int _islower(int c)
{
	int ans;

	if (islower(c) != 0)
		ans = 1;
	else
		ans = 0;

	return (ans);
}
