#include "search_algos.h"

/**
 * linear_search - Performs a linear search on an integer array to find
 *                 a given value
 *
 *   @array: Pointer to the start of the integer array
 *   @size: The total number of elements in the array
 *   @value: The integer value to search for within the array
 *
 * Return: The index of the found value in the array, or -1 if the
 *         value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Vlaue checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1); /*in case we did not find the value*/
}
