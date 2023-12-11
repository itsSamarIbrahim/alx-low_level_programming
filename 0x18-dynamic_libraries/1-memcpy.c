#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 * @dest: the buffer to be copied to
 * @src: the buffer to be copied
 * @n: the number of bytes to be copied
 * Return: dest, the modified buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = dest;
	char *pSrc = src;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		pDest[i] = pSrc[i];
	}

	return (dest);
}
