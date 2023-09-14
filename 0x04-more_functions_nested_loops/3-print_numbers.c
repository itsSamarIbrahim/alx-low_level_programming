#include "main.h"

/**
 * print_numbers - a function prints the numbers, from 0 to 9 & a new line.
 * Return: void
 */
void print_numbers(void)
{
	char a;

	for (a = '0' ; a <= '9' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
