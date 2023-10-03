#include <stdio.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: @argc: the number of command-line arguments
 * @argv: the arrary that contains the command-line arguments
 * Return: 0 - Success or 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n)";
		return (0);
	}
	if (cents < 0)
	{
		printf("0\n");
	}

	return (0);
}
