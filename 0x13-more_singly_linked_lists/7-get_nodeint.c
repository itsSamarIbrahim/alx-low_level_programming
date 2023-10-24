#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list
 * @head: a pointer to the head of the listint_t linked list
 * @index: it parameter represents the position of a node in a linked list,
 * starting from 0
 * Return: a pointer to the nth node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	current = head;
	if (current == NULL)
		return (NULL);

	for (i = 0; i < index && current != NULL; i++)
	{
		current = (*current).next;
	}

	return (NULL);
}
