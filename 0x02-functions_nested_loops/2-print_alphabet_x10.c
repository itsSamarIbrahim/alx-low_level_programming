#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, lowercase, and  a new line.
 *
 * return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	i++;
	}
}
