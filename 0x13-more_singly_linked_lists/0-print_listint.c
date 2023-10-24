#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: a pointer to the head of the linked list listint_t
 * Return: the count of the nodes in the linked list listint_t
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		counter++;
	}

	return (counter);
}
