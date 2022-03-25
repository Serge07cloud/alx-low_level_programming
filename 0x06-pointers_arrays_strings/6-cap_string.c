#include <stdio.h>
#include <ctype.h>
/**
 * *cap_string - capitalize all words of a string
 * @str: string to capitalize
 *
 * Return: String that has been capitalized
 **/
char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i > 0)
		{
			if (*(str + (i - 1)) == putchar(32) ||
					*(str + i - 1) == '\t' ||
					*(str + i - 1) == '\n' ||
					*(str + i - 1) == ',' ||
					*(str + i - 1) == ';' ||
					*(str + i - 1) == '.' ||
					*(str + i - 1) == '!' ||
					*(str + i - 1) == '?' ||
					*(str + i - 1) == '"' ||
					*(str + i - 1) == '(' ||
					*(str + i - 1) == ')' ||
					*(str + i - 1) == '{' ||
					*(str + i - 1) == '}')
		{
			*(str + i) = toupper(*(str + i));
		}
		}
		i++;
	}

	return (str);

}
