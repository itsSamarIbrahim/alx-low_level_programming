#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: a double pointer to the head of the linked list list_t
 * @str: the string to be added to the end of the lineked list list_t
 * Return: the address of the new element or NULL (ON FAILURE)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current;
	int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	(*newNode).str = strdup(str);
	if ((*newNode).str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (str[len])
		len++;

	(*newNode).len = len;
	(*newNode).next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		current = *head;
		while ((*current).next)
			current = (*current).next;
		(*current).next = newNode;
	}

	return (newNode);
}
