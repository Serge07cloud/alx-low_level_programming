#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointer to string
 *
 * Program that add positive numbers
 *
 * Return: integer
 */
int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && *argv[i] != '0')
			{
				printf("Error \n");
				exit(EXIT_FAILURE);
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	exit(EXIT_SUCCESS);
}
