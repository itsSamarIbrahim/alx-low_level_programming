#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @str: the string to be replaced
 * Return: the desired style of the string
 */
char *leet(char *str)
{
	char *leetChars = "aAeEoOtTlL";
	char *leetReplacements = "4433007711";
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; leetChars[b] != '\0'; b++)
			if (str[a] == leetChars[b])
			{
				str[a] = leetReplacements[b];
				break;
			}
	}

	return (str);
}
