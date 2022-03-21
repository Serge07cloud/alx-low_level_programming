#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char var[9];
	int i = 0;

	var[0] = '_';
	var[1] = 'p';
	var[2] = 'u';
	var[3] = 't';
	var[4] = 'c';
	var[5] = 'h';
	var[6] = 'a';
	var[7] = 'r';
	var[8] = '\0';

	while (i < 9)
	{
	 _putchar(var[i]);
	 i++;
	}

	_putchar('\n');

	return (0);
}
