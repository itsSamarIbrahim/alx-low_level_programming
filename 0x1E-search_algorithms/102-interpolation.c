#include "search_algos.h"

/**
 * interpolation_search - Searches for a given value within an array using
 *                        the Interpolation Search algorithm
 *
 * @array: Pointer to the array where the search should take place
 * @size: Size of the array
 * @value: Value to search for within the array
 *
 * Return: Index of the found element if present, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low_index, high_index, pos;

	if (array == NULL || size == 0)
		return (-1);
	low_index = 0;
	high_index = size - 1;
	while (low_index <= high_index && value >= array[low_index]
			&& value <= array[high_index])
	{
		if (low_index == high_index)
		{
			if (array[low_index] == value)
			{
				printf("Value checked array[%lu] = [%d]\n",
						low_index, array[low_index]);
				return (low_index);
			}
			return (-1);
		}
		pos = low_index + (((double)(high_index - low_index) /
					(array[high_index]
					 - array[low_index])) * (value
					 - array[low_index]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n",
					pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low_index = pos + 1;
		else
			high_index = pos - 1;
	}

	return (-1);
}
