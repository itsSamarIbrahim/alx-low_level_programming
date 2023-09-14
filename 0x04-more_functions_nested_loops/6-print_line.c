#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the number of the underscores printed
 * Return:
 */
void print_line(int n)
{
	char underscore;

	if (n > 0)
	{
		for (underscore = 1 ; underscore <= n ; underscore++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
