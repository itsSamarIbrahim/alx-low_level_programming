#include "lists.h"

/**
 * reverse_listint -  a function that reverses a listint_t linked list
 * @head: a double pointer to the head of the listint_t linked list
 * Return: a pointer to the first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prevCurrent, *next;

	current = *head;
	prevCurrent = NULL;
	while (current != NULL)
	{
		next = (*current).next;
		(*current).next = prevCurrent;
		prevCurrent = current;
		current = next;
	}
	*head = prevCurrent;

	return (*head);
}
