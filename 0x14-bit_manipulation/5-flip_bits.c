#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to flip from n into m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bitCount = 0;

	while (xor != 0)
	{
		bitCount = bitCount + (xor & 1);
		xor >>= 1;
	}

	return (bitCount);
}
