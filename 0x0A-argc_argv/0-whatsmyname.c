#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: the number of command-line arguments
 * @argv: the arrary that contains the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
