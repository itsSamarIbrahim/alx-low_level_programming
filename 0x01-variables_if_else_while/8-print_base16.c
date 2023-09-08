#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char num;
	char ALPHA;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num)
	}
	for (ALPHA = 'A'; ALPHA <= 'F'; ALPHA++)
	{
		putchar(ALPHA)
	}
	putchar('\n');

	return (0);
}

