#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	while (alpha[i] != '\0')
	{
		_putchar(alpha[i]);
		i++;
	}

	_putchar('\n');

}
