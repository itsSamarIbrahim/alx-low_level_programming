#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: a pointer to the head of the liked list list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current)
	{
		temp = (*current).next;
		free((*current).str);
		free(current);
		current = temp;
	}
}
