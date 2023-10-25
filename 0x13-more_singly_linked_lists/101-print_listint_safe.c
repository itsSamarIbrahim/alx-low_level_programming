#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: a pointer to the head of the listint_t linked list
 * Return: the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast, *slow;
	size_t counter = 0;

	if (head == NULL)
	{
		exit(98);
	}
	fast = head;
	slow = head;
	while (slow != NULL && fast != NULL && (*fast).next != NULL)
	{
		printf("[%p] %d\n",(void *) slow, (*slow).n);
		counter++;
		slow = (*slow).next;
		fast = (*(*fast).next).next;
		if (slow == fast)
		{
		/*	if(slow->next != NULL)
			{*/
				printf("-> [%p] %d\n", (void *)(*slow).next, (*(*slow).next).n);
				/*slow->next->n*/
			/*}*/
			break;
		}
	}

	return (counter);
}
