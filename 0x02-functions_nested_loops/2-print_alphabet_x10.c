#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - function that print 10 times the alphabet
 *
 * Return: nothing
 **/
void print_alphabet_x10(void)
{
	int i, j;

	char al[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (al[j] != '\0')
		{
			_putchar(al[j]);
			j++;
		}
		_putchar('\n');

	}
}
