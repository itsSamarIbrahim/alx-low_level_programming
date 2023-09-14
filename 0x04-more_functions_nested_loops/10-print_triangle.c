#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <=size; j++)
		{
			if ((i+j) <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
	_putchar('\n');
	}
}
