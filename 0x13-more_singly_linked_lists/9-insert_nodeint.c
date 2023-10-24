#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new node
 * at a given position
 * @head: a double pointer to the head of the listint_t linked list
 * @idx: it represents the index at which a new node should be
 * inserted in the listint_t linked list
 * @n: the value of the newly inserted node
 * Return: the address of the newly inserted node (ON SUCCESS)
 * or NULL (ON FAILURE)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insertNode, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	insertNode = malloc(sizeof(listint_t));
	if (insertNode == NULL)
		return (NULL);

	(*insertNode).n = n;

	if (idx == 0)
	{
		(*insertNode).next = *head;
		*head = insertNode;
	}
	else
	{
		current = *head;
		for (i = 0; current != NULL && i < (idx - 1); i++)
		{
			current = (*current).next;
		}
		if (current == NULL)
		{
			free(insertNode);
			return (NULL);
		}
		(*insertNode).next = (*current).next;
		(*current).next = insertNode;
	}

	return (insertNode);
}
