#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Prints half of a string
 * @str: pointer to string
 *
 * Return: nothing
 **/
void puts_half(char *str)
{
	unsigned int long i, n;

	if (strlen(str) % 2 == 0)
		n = strlen(str) / 2;
	else
		n = ((strlen(str) - 1) / 2) + 1;

	for (i = n; i < strlen(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
