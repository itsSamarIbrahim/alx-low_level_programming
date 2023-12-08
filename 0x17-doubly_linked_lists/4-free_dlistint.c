#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the linked dlistint_t list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
