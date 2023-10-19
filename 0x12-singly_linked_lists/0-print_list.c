#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: a pointer to the list list_t
 * Return: the number of the nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		counter++;
	}

	return (counter);
}
