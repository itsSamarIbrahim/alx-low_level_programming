#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: a pointer to a character array/string
 * that contains the source string
 * @dest: a pointer to a character array/string
 * that represents the destination buffer
 * Return: the values of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] = '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
