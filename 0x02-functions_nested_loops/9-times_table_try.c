#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: 0
 */
void times_table(void)
{
	int rows = 9;
	int cols = 9;
	int i;
	int j;
	int result;

	for (i = 0; i <= rows; i++)
	{
		for (j = 0; j <= cols; j++)
		{
			result = i * j;
			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + 48);
			}
			else
			{
				_putchar(result / 10 + 48);
				_putchar(result % 10 + 48);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\b');
		_putchar('\b');
		_putchar('\n');
	}
}
