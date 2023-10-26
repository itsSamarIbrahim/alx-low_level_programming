#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: an integer to store a large positive whole number value
 * @index: it represents the position of a bit within a binary number
 * Return: 1 (ON SUCCESS) or -1 (ON FAILURE)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitValue;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bitValue = 1 << index;
	*n = *n | bitValue;

	return (1);
}
