#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: the pointer to the buffer
 * @b: the value to be used to replace the part we want in the string
 * @n: the number of bytes to be replaced in the the string
 * Return: s, the modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
