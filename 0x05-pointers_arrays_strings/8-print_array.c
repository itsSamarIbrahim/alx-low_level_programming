#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers,and a new line
 * Return: void
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
	       if (count == (n - 1))
	       {
		       printf("%d", a[count]);
	       }	       
	       else
		       printf("%d, ", a[count]);
	}
	printf("\n");
}
