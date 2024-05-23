#include "search_algos.h"

/**
 * binary_search_recursive - Performs a recursive binary search on an array
 *
 * This function implements a binary search algorithm recursively.
 * It starts by checking if the left index is greater than the right index,
 * returning -1 if true, indicating that the value is not found in the array.
 * It then calculates the middle index and compares the value at the middle
 * index with the target value. If they match, it checks if the current
 * position is the first occurrence of the value in the sorted array.
 * If so, it returns the current position; otherwise, it continues searching in
 * the left half of the array. If the value at the middle index is greater than
 * the target value, it searches in the left half of the array; otherwise,
 * it searches in the right half. The base case for recursion is when the left
 * index becomes greater than the right index, indicating that the value has
 * been found or the search space has been exhausted.
 *
 * @array: Pointer to the array where the search will take place
 * @left: The starting index of the portion of the array to search within
 * @right: The ending index of the portion of the array to search within
 * @value: The value to search for in the array.
 *
 * Return: The index of the target value if found, -1 otherwise
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");

	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (binary_search_recursive(array, left, mid, value));
	return (binary_search_recursive(array, mid + 1, right, value));
}


/**
 * advanced_binary - Wrapper function for binary_search_recursive
 *
 * This function serves as a wrapper for binary_search_recursive.
 * It checks if the array pointer is NULL or if the size is zero,
 * returning -1 in either case to indicate that the search cannot proceed.
 * Otherwise, it calls binary_search_recursive with the entire array,
 * starting from index 0 up to size - 1, to perform the binary search
 *
 * @array: Pointer to the array where the search will take place
 * @size: The size of the array
 * @value: The value to search for in the array
 *
 * Return: The result of binary_search_recursive
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}
