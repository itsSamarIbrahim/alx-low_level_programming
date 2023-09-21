#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @str: the string to be ciphered
 * Return: the ciphered string
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] = str[i] + 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] = str[i] - 13;
		i++;
	}

	return (str);
}
