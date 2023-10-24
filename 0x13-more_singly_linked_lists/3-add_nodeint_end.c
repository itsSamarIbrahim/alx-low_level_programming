#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list
 * @head: a double pointer to the head of the linked list listint_t
 * @n: the new value to be added to the linked list listint_t
 * Return: the new address of the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newEndNode, *current;

	if (head == NULL)
		return (NULL);

	newEndNode = malloc(sizeof(listint_t));
	if (newEndNode == NULL)
		return (NULL);

	(*newEndNode).n = n;
	(*newEndNode).next = NULL;

	if (*head == NULL)
	{
		*head = newEndNode;
	}
	else
	{
		current = *head;
		while ((*current).next)
		{
			current = (*current).next;
		}
		(*current).next = newEndNode;
	}
	free(newEndNode);

	return (newEndNode);
}
