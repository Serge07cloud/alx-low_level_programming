#include <stdio.h>

/**
 * main - Entry point
 * Application: Numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for(ch = '0' ; ch <= '10' ; ch++)
	{
	      putchar(ch);
	 }
	/* New line */
	putchar(10);

	return (0);
}
