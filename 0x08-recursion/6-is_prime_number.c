#include "main.h"

/**
 * is_prime_number - a function tells if a number is a prim number or not
 * @n: the number to be checked
 * Return: 1 if it is a prim number or 0 it it is not
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 5 || (n % 10 == 1 && n != 1) || n % 10 == 3 ||
		       n % 10 == 7 || n % 10 == 9)
	{
		return (1);
	}
	else
		return (0);
}
