#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: parameter count
 * @argv: array of string
 * Program that prints its name
 *
 * Return: integer
 */
int main(int argc, char **argv)
{
	int index = argc - 1;

	printf("%s\n", argv[index]);

	exit(EXIT_SUCCESS);
}
