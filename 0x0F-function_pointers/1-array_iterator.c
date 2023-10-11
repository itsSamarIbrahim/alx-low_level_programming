#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 * @array: the array that hols the values
 * @size: the number of the elements of the array
 * @action: the function pointer to be called to go through print_elem
 * and print_elem_hex functions
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
