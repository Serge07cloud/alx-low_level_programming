#include <ctype.h>
/**
 * isNumber - Check whether an input is an integer or not
 * @str: param
 *
 * Return: integer (1 if interger, 0 else)
 */
int isNumber(char *str)
{
	int isNum = 1;
	int i = 0;

	while (*(str + i) != '\0' && isNum == 1)
	{
		if (isdigit(*(str + i)) == 0)
		{
			isNum = 0;
		}
		i++;
	}

	return (isNum);
}
