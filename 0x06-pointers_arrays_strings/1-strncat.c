#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: the string to be appended to
 * @src: the string to be appended
 * @n: the number of characters to be appended
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len1 + i] = *src;
		src++;
	}
	dest[len1 + i] = '\0';

	return (dest);
}
