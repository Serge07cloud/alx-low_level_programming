#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print string in reverse followed by a new line
 * @s: pointer to string
 *
 * Return: nothing
 **/
void print_rev(char *s)
{
	char *str = s;
	int i;

	for (i = strlen(str) - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
