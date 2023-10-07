#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: the size of memory to be allocated
 * Return: a pointer to the allocated memory (ON SUCCESS)
 * OR an exit value of 98 if there is no avaliable
 * memory to be allocated (ON FAILURE)
 */
void *malloc_checked(unsigned int b)
{
	int *result;

	restult = malloc(b);

	if (result == NULL)
		exit(98);
	else
		return (result);
}
