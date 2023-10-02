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
	int a, b;
	int sum = 0;

	if (argc == 1)
	{
		argv[0] = 0;
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		while (argv[a][b])
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}
