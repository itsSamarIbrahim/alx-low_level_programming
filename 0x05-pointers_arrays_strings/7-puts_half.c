#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int a;
	int count = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		count++;
	}

	if (count % 2 == 0)
	{
		for (a = (count / 2); a < count; a++)
			_putchar(str[a]);
	}
	else
	{
		for (a = (count - 1) / 2; a < count; a++)
			_putchar(str[a]);
	}
	_putchar('\n');
}
