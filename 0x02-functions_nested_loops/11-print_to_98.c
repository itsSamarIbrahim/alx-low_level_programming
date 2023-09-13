#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * and a new line.
 *
 * @n: the number to be entered
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int to_98;

	if (n > 98)
	{
		for (to_98 = n; to_98 > 98; to_98--)
		{
			printf("%d, ", to_98);
		}
	}
	else
	{
		for (to_98 = n; to_98 < 98; to_98++)
		{
			printf("%d, ", to_98);
		}
	}
	printf("98\n");
}
