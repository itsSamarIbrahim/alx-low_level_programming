#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n: the number to be checked
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit = ((n % 10) * -1);
		_putchar('0' + lastDigit);
	}
	else
	{
		_putchar('0' + lastDigit);
	}

	return (lastDigit);
}
