#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string to be concatenated
 * @n: the bytes number of s2 to be concatenated
 * Return: a pointer to a newly allocated memory space that contains
 * the concatenation of s1 followed by the first n bytes of s2
 * If the function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *prod;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;

	prod = malloc((len1 + len2 + 1) * sizeof(char));

	if (prod == NULL)
		return (NULL);
	for (i = 0; i < n && *s1 != '\0'; i++)
		prod[i] = s1[i];
	for (i = 0; i < n && *s2 != '\0'; i++)
		prod[len1 + i] = s2[i];
	prod[len1 + i] = '\0';

	return (prod);
}
