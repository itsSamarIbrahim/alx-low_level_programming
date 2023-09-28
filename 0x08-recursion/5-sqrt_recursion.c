#include "main.h"

/**
 * helper - a function to help _sqrt_recursion fuction to find
 * the square root of a given number
 * @n: the natural square root
 * @i: the guess of the square root
 * Return: the guess, or -1 if it does not have a natural square root
 */
int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (helper(n, i + 1));
	}
}

/**
 * _sqrt_recursion - a function returns the natural square root of a number
 * @n: the natural square root
 * Return: n if it is 1 or 0, or -1 if it does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helper(n, 1));
	}
}
