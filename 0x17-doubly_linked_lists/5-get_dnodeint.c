#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the head of the dlistint_t linked list
 * @index: the index of the nth node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head != NULL)
	{
		if (x == index)
			return (head);

		head = head->next;
		x++;
	}

	return (NULL);
}
