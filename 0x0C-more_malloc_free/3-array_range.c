#include "main.h"
#include <stdlib.h>

/**
 * *array_range -  a function that creates an array of integers
 * @min: the smallest value
 * @max: the largest value
 * Return: returns a pointer to a dynamically allocated array of
 * integers containing values from min to max (ON SUCCESS)
 * if min is greater than max or if memory allocation fails,
 * it returns NULL (ON FAILURE)
 */
int *array_range(int min, int max)
{
	int *prod, i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	prod = (int *)malloc(sizeof(int) * range);

	if (prod == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		prod[i] = min + i;

	return (prod);
}
