#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: a double pointer to the head of the linked list list_t
 * @str: the string to added in the newly created node
 * Return: the number of the bew total nodes (ON SUCCESS) or NULL (ON FAILURE)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len = 0;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	(*newNode).str = strdup(str);

	while (str[len])
		len++;

	(*newNode).len = len;
	(*newNode).next = *head;
	*head = newNode;

	return (newNode);
}
