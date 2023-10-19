#include "lists.h"

/**
 * list_len - a function that returns the number of elements in the list_t list
 * @h: a pointer to the linked list list_t
 * Return: the number of the elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = (*h).next;
	}

	return (counter);
}
