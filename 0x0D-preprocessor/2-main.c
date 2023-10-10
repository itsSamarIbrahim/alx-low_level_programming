#include <stdio.h>

/**
 * 2-main.c - a program that prints the name of the file it was compiled from
 * Return: 0 (ON SUCCESS)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
