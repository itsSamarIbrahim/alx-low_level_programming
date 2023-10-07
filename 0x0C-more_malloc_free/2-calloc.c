#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 * Return: a pointer to the allocated memory, with all the memory set to zero
 * if nmemb or size is zero returns NULL (ON FAILURE)
 * if malloc fails return NULL (ON FAILURE)
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
