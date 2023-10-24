#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: a pointer to the head of the listint_t linked list
 * Return: the sum of the numbers of the listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + (*head).n;
		head = (*head).next;
	}

	return (sum);
}
