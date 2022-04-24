#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - function name
 * @s: string param
 * Description: print string in reverse
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	char *dst = malloc(sizeof(*s) * strlen(s));

	_putchar(*(s + strlen(s) - 1));
	if (strlen(s) > 0)
	{
		strncpy(dst, s, strlen(s) - 1);
		_print_rev_recursion(dst);
	}

	free(dst);
}
