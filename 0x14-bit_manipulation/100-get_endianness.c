#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if the system is big endian (numbers are stored
 * from biggest to smallest) (ON SUCCESS)
 * or 1 if the system is little endian (numbers are stored
 * from smallest to biggest) (ON FAILURE)
 */
int get_endianness(void)
{
	unsigned int num;
	char *ptr;

	num = 1;
	ptr = (char *)&num;
	if (*ptr == 0)
		return (1);

	return (0);
}
