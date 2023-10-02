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
		if (*argv[a] >= 48 && *argv[a] <= 57)
		{
			sum = sum + atoi(argv[a]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc == agrv[0])
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", sum);

	return (0);
}
