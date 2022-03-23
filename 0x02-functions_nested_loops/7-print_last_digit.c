#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - print the last difit of a number
 * @n: integer value
 *
 * Return: int
 **/
int print_last_digit(int n)
{
	int p;

	p = abs(n) % 10;

	return (p);
}
