#include <stdio.h>
/**
 * positive_or_negative - function name
 * @n : integer param
 * Application: print whether a number is positive, negative or zero equal
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
	
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
}
