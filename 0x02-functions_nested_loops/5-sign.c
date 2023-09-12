#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 *
 * @n: the number to be checked.
 *
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	int min = -1;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < -1)
	{
		_putchar('-');
		return (min);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
