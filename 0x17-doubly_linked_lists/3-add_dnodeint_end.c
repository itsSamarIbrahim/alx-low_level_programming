#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: the head of the dlistint_t list
 * @n: the value to be added
 * Return: the address of the new element (ON SUCCESS), or NULL (ON FAILURE)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *end_node;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (!*head)
	{
		end_node->prev = NULL;
		*head = end_node;
	}
	else
	{
		h = *head;
		while (h->next)
			h = h->next;

		h->next = end_node;
		end_node->prev = h;
	}

	return (end_node);
}
