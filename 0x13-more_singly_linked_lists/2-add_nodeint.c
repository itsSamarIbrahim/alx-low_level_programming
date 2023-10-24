#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list
 * @head: a double pointer to the head of the linked list listint_t
 * @n: the new value to be assigned in the head of the liked list listint_t
 * Return: the address of the new node that has been added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		{
			return (NULL);
			free(newNode);
		}
	(*newNode).n = n;
	(*newNode).next = *head;
	*head = newNode;

	return (newNode);
}
