#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array that holds the values
 * @size: the number of the elements of the array
 * @cmp: the function pointer to be called
 * Return: the number of the array element (ON SUCCESS)
 * -1 if array and cmp functions are NULL
 * or the size number is less than or equal to 0 (ON FAILURE)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}

	return (-1);
}
