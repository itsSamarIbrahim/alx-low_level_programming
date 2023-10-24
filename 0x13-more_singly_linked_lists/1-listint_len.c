#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list
 * @h: a pointer to the head of the linked list listint_t
 * Return: the list length
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = (*h).next;
	}

	return (len);
}
