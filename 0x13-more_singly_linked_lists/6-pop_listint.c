#include "lists.h"

/**
 * listint_t - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n)
 * @head: a double pointer to the head of the listint_t linked list
 * Return: the data of the head node that was deleted from the listint_t
 * linked list (ON SUCCESS) or  0 if it is empty (ON FAILURE)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (**head).n;
	temp = *head;
	*head = (**head).next;
	free(temp);

	return (data);
}
