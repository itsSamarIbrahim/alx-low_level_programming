#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a double pointer to the head of the listint_t linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current)
	{
		next = (*current).next;
		free(current);
		current = next;
	}

	*head = NULL;
}
