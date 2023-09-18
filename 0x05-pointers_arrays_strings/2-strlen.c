#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to calculate the length of
 * Return: charCount
 */
int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount] != '\0')
	{
		charCount++;
	}

	return (charCount);
}
