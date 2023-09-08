#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet = 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			continue;
			putchar(alphabet);
			alphabet++;
		}
	}
	putchar('\n');
	
	return (0);
}
