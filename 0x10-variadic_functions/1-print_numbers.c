#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: a pointer to the string to be printed between the numbers
 * @n: the number of parameters to be passed to thre function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	if (n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		printf("%d", num);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
