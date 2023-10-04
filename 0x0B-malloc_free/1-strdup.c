#include "main.h"
#include <stdlib.h>

/**
 *
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
