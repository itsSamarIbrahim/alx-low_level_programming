#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number to calculate its factorial
 * Return: -1 if it is an error or 1 when condition is true to preform result
 */
int factorial(int n)
{
	int result;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		result = (n * factorial(n - 1));
		return (result);
	}
}
