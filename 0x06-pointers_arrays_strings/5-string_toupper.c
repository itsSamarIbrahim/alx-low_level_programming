#include "main.h"

/**
 * *string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 * @str: the string to be capitalized
 * Return: the capitalized string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i++;
	}

	return (str);
}
