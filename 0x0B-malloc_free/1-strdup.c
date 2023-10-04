#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: the given string
 * Return: a pointer to the duplicated string. Otherwise, NULL.
 */
char *_strdup(char *str)
{
	int i;
	char *arrStr;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len])
	{
		len++;
	}

	arrStr = malloc((len + 1) * sizeof(char));

	if (arrStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		arrStr[i] = str[i];
	}

	arrStr[len] = '\0';

	return (arrStr);
}
