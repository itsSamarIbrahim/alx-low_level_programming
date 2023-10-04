#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the newly allocated space in memory s1
 * or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *prod;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	prod = malloc((len1 + len2 + 1) * sizeof(char));

	if (prod == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		prod[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++, i++)
		prod[i] = s2[j];

	prod[i] = '\0';

	return (prod);
}
