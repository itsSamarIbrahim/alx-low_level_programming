#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list
 * @head: the head of the dlistint_t linked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}

	return (sum);
}
