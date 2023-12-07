#include "lists.h"

/**
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements_count = 0;

	if (h == NULL)
		return (elements_count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elements_count++;
		h = h->next;
	}

	return (elements_count);
}
