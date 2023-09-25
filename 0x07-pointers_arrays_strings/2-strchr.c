#include "main.h"

/**
 * *_strchr - a function that locates a character in a string.
 * @s: the string to be checked
 * @c: the character to be checked for in the string
 * Return: s, the modified string or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
			i++;
		}
	s++;
	}

	return (0);
}
