#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointer to string
 * program that prints the minimum number of coins
 * Return: integer
 */
int main(int argc, char **argv)
{
	int r, q, i;

	int p[5] = {25, 10, 5, 2, 1};

	q = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		r = atoi(argv[1]);
		if (r < 0)
			printf("%d\n", 0);
		else
		{
			q = 0;
			i = 0;
			while (r != 0 && i < 5)
			{
				if (r >= p[i])
				{
					q += r / p[i];
					r %= p[i];
				}
				i++;
			}
			printf("%d\n", q);
		}
		exit(EXIT_SUCCESS);
	}
}
