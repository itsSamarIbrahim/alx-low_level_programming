#include "main.h"

/**
 *
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
