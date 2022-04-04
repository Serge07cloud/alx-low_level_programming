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
	printf("%ld\n", sizeof(argv[0]) * argc / sizeof(argv[0]));

	exit(EXIT_SUCCESS);
}
