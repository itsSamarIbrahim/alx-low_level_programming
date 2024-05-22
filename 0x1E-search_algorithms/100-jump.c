#include "search_algos.h"

/**
 * jump_search - Implements the Jump Search algorithm to find a given value
 * in an array
 *
 *   The algorithm works by jumping ahead by a certain step size, then
 *   linearly searching through the remaining elements until the target value
 *   is found or determined to be absent
 *
 * @array: Pointer to the array where the search will take place
 * @size: Size of the array
 * @value: Value to be searched for within the array
 *
 * Return: Index of the found value if present, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, next, end, i;

	if (array == NULL || size == 0)
		return (-1);

	step = (size_t)sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		next = prev + step;
		if (next >= size || array[next] >= value)
			break;
		prev = next;
	}

	end = prev + step < size ? prev + step : size;
	printf("Value found between indexes [%ld] and [%ld]\n", prev, end);

	for (i = prev; i < end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
