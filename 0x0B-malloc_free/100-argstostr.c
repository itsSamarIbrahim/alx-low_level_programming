#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - a function that concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: the array of the arguments passed
 * Return: a pointer to the string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int x, y, len = 0, index = 0;
	char *newString;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
		len++; /*for the '\n'*/
	}
	newString = (char *)malloc((len + 1) * sizeof(char));
	if (newString == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			newString[index++] = av[x][y];
		newString[index++] = '\n';
	}
	newString[index] = '\0';

	return (newString);
}
