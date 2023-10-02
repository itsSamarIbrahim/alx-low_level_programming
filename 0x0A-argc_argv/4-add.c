#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: the number of command-line arguments
 * @argv: the arrary that contains the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		if (!isdigit(*argv[a]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[a]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
