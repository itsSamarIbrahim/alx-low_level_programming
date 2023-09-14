#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * Return: void
 */
void print_diagonal(int n)
{
	int slash;
	int space;

	if (n > 0)
	{
		for (slash = 0 ; slash < n ; slash++)
			{
				for (space = 0 ; space < slash ; space++)
				{
					_putchar(' ');
				}
				_putchar(92);
				_putchar('\n');
			}
	}
	else
	{
		_putchar('\n');
	}
}
