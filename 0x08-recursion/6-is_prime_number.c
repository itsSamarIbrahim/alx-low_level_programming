#include "main.h"

/**
 * is_prime_number - a function tells if a number is a prim number or not
 * @n: the number to be checked
 * Return: 1 if it is a prime number or 0 it it is not
 */

/**
 * helper - a function recursively checks if a number is divisible by
 * a given divisor, determining if it is not a prime number
 * @i: a number that evenly divides another number without leaving a remainder
 * Return: 1 if it is a prime number or 0 if it is not
 */

int helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
			return (helper(n, i - 1));
	}
}

int is_prime_number(int n)
{
	/**
	 * if (n == 2 || n == 5 || (n % 10 == 1 && n != 1) || n % 10 == 3 ||
	 * n % 10 == 7 || n % 10 == 9)
	 * {
	 * return (1);
	 * }
	 * else
	 * return (0);
	 */

	if (n < 2)
		return (0);
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (helper(n, n - 1));
	}
}
