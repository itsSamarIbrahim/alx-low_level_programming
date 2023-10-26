#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the integer from which we want to extract a specific bit
 * @index: the integer representing the position of the bit to extract
 * from the given number n
 * Return: an integer indicating the value of the bit at the specified
 * index in the given number n (ON SUCCESS) or -1 (ON FAILURE)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}
