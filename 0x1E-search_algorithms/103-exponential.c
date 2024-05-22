#include "search_algos.h"


/**
 * binary_search_ - Searches for a value in a sorted array using binary search
 *
 * @array: Pointer to the first element of the array to search in
 * @start: The starting index of the section of the array to be searched (left)
 * @end: The ending index of the section of the array to be searched (right)
 * @value: The value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binary_search_(int *array, size_t start, size_t end, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		mid = start + (end - start) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}


/**
 * exponential_search - Searches for a given value within an array using the
 *                      exponential search algorithm
 * This function implements the exponential search algorithm, which is a fast
 *    searching algorithm for sorted arrays. It starts by comparing the target
 *    value with the middle element of the array. If they are unequal, the half
 *    in which the target cannot lie is eliminated, and the search continues on
 *    the remaining half until it is successful or the remaining half is empty
 *
 * @array: Pointer to the first element of the array to be searched
 * @size: The number of elements in the array
 * @value: The value to be searched for in the array
 *
 * Return: The index of the value in the array if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);

	for (i = 1; i < size && array[i] <= value; i *= 2)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	left = i / 2;
	right = (i < size) ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search_(array, left, right, value));
}
