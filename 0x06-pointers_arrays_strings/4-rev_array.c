#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array of the integers
 * @n: the number of the elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int swap;

	while (start < end)
	{
		swap = *start;
		*start = *end;
		*end = swap;
		start++;
		end--;
	}
}
