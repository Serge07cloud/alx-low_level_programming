#include <stdlib.h>
#include <stdio.h>
/**
 * main -Entry point
 * @argc: argument count
 * @argv: array of pointer to string
 *
 * Program that multiplies two numbers
 *
 * Return: integer
 */
int main(int argc, char **argv)
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		exit(EXIT_SUCCESS);
	}
}
