#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: apointer to a string
 * @accept: the set of bytes to be searched for in s
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	for (; *s; s++)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
	}

	return (0);
}
