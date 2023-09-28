#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a pointer to the string to be returning its length
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1);
		++len;
	}

	return (len);
}
