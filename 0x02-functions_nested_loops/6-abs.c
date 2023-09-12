#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * return: 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i * -i);
	}
	else
	{
		return (i);
	}
	
}
