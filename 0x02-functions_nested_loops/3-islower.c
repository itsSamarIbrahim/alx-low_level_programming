#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 *
 * @c: the character to be checked
 *
 * Returns: 1 if is the character lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
