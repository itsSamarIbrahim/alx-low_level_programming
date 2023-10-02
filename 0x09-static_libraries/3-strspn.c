#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a pointer to a string
 * @accept: the set of characters to be considered in the prefix substring
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (count);
}
