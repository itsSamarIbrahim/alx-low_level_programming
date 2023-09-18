#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the string to be reversed.
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int a;
	char swap;

	for (a = 0; s[a] != '\0'; a++)
		count++;

	for (a = 0; a < count / 2; a++)
	{
		swap = s[a];
		s[a] = s[count - 1 - a];
		s[count - 1 - a] = swap;
	}

}
