#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, and a new line.
 * @str: the string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
