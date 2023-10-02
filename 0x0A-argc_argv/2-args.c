#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: the number of command-line arguments
 * @argv: the arrary that contains the command-line arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
