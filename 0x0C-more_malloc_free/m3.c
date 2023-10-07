#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *, char *);

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char *prod;

	prod = string_nconcat("Hello", NULL);
	if (prod == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", prod);
	free(prod);

	prod = string_nconcat(NULL, "Hello");
	if (prod == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", prod);
	free(prod);

	prod = string_nconcat(NULL, NULL);
	if (prod == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", prod);
	free(prod);

	return (0);
}

