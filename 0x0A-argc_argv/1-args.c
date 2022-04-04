#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointer to the string arguments
 *
 * Program that prints the number of arguments passed into it
 * Return: integer
 */
int main(int argc, char **argv)
{
	unsigned int long size = (sizeof(argv) / sizeof(argv)) *  argc;

	printf("%ld\n", size);

	exit(EXIT_SUCCESS);
}
