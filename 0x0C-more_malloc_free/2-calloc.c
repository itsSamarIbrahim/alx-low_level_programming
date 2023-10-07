#include "main.h"
#include <stdlib.h>

/**
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	result = (char *)malloc(total);

	if (result == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
		result[i] = 0;

	return (result);
}
