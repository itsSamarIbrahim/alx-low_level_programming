#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: the number of command-line arguments
 * @argv: the arrary that contains the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
