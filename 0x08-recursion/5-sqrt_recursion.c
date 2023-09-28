#include "main.h"

/**
 *
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
		helper();
	}
}

/**
 *
 */
int helper(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}

	int mid = ((start + end) / 2);
	int twoMids = mid * mid;

	if (twoMids == n)
	{
		return (mid);
	}
	else if (twoMids > n)
	{
		return (helper(n, start, mid - 1));
	}
	else (twoMidws < n)
	{
		return (helper(n, mid + 1, end));
	}
}
