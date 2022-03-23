#include <stdio.h>
/**
 * swap_int - swap the value of two integers
 * @a: a pointer
 * @b: another pointer
 *
 * Return: nothing.
 **/
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
