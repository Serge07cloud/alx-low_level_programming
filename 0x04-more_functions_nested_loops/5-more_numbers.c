#include "main.h"

/**
 * more_numbers - function name
 * Description : Print 10 times the numbers from 0 to 14
 *
 * Return: noting
 */

void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k < 10; k++)
	{
		i = 48;
		while (i < 50)
		{
			j = 48;
			while (j < 58)
			{
				if (i != 48)
					_putchar(i);
				_putchar(j);

				if (i == 49 && j == 52)
				{
					_putchar('\n');
					j = 57;
				}

				j++;
			}

			i++;
		}
	}
}
