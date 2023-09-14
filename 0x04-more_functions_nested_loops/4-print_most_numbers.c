#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9,
 * and  a new line.
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48 ; a <= 57 ; a++)
	{
		if (a != 50 && a != 52)
			_putchar(a);
	}
	_putchar('\n');
}
