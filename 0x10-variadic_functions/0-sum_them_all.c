#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of the parameters
 * Return: addition (ON SUCCESS) or 0 (ON FAILURE)
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
