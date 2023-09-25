#include "main.h"
#include <stddef.h>

/**
 * *_strchr - a function that locates a character in a string.
 * @s: the string to be checked
 * @c: the character to be checked for in the string
 * Return: s, the modified string or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
