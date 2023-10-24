#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index (index) of a listint_t linked list
 * @head: a double pointer to the head of the listint_t linked list
 * @index: it represents the index at which a certain node to be deleted
 * in the listint_t linked list
 * Return: 1 (ON SUCCESS) or -1 (ON FAILURE)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prevCurrent;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	prevCurrent = NULL;

	if (index == 0)
	{
		*head = (*current).next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		prevCurrent = current;
		current = (*current).next;
	}

	if (current == NULL)
		return (-1);

	(*prevCurrent).next = (*current).next;
	free(current);

	return (1);
}
