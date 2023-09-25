#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: a pointer to a matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int firstDiagonalSum = 0;
	int secondDiagonalSum = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		firstDiagonalSum = firstDiagonalSum + *(a + i * size + i);
		secondDiagonalSum = secondDiagonalSum + *(a + i * size + (size - 1 - i));
	}
	printf("%d, ", firstDiagonalSum);
	printf("%d\n", secondDiagonalSum);
}
