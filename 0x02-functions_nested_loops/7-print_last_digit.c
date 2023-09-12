#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @i: the number to be printed
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
	else if (n > 0)
	{
		_putchar('0' + lastDigit);
	}
	else
	{
		lastDigit = 0;
	}

	return (lastDigit);
}
