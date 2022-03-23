#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - print every other character of a string
 * @str: pointer to a string
 *
 * Return: nothing
 **/

void puts2(char *str)
{
	unsigned int long i, len;

	len = strlen(str);
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}
