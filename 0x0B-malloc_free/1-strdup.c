#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 */
char *_strdup(char *str)
{
	size_t i;
	char *arrStr;

	if (str == NULL)
	{
		return (NULL);
	}

	arrStr = malloc((strlen(str) + 1) * sizeof(char));

	if (arrStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (strlen(str) + 1); i++)
	{
		arrStr[i] = str[i];
	}

	return (arrStr);
}
