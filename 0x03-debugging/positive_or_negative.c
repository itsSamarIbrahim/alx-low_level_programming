#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * positive_or_negative -
 *
 * Return: 0
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", i);
	if (i > 0)
	{
		printf("is positive\n");
	} else if (i < 0)
	{
		printf("is negative\n");
	} else
	{
		printf("is zero\n");
	}
	return (0);
}
