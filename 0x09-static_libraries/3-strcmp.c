#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: the first string
 * @s2: the secong string
 * Return: 0 if they are the same, or an ASCII difference value if not
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
