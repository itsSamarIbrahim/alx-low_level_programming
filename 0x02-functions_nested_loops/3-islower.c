#include "main.h"

/**
 * _islower - a function that checks if the character is lowercase, otherwise it returns 0
 *
 * @c: the character to be checked
 *
 * Returns: it returns 1 if the characther is lowercase or 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
