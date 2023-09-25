#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 * @haystack: a pointer to the string in which to search for a substring
 * @needle: a pointer to the substring to search for within the haystack string
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (0);
}
