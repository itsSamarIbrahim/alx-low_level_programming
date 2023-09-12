#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @i: the number to be checked for the absolute value.
 *
 * return: the absolute value of i.
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
