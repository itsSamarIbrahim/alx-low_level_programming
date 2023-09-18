#include "main.h"

/**
 * *_strcpy - a function copies the string pointed to by src with null byte(\0)
 * to the buffer pointed to by dest.
 * @src: a pointer contains the source string
 * @dest: a pointer represents the destination buffer
 * Return: the values of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
