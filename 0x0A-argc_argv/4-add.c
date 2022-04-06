#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
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
	int sum, i, j;
	char *str;

	int isNum = 1;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			str = argv[i];
			while (*(str + j) != '\0' && isNum == 1)
			{
				if (isdigit(*(str + j)) == 0)
					isNum = 0;
				j++;
			}

			if (isNum == 0)
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
			else
				sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	exit(EXIT_SUCCESS);
}
