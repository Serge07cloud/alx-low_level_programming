#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a number
 * @n: integer value
 *
 * Return: integer
 **/
int print_last_digit(int n)
{
	int r = 0;

	r = n % 10;

	_putchar(r);

	return (r);
}
