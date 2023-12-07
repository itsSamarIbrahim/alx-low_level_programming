#include "lists.h"

/**
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements_count = 0;

	if (h == NULL)
		return (elements_count);

	while (h != NULL)
	{
		elements_count++;
		h = h->next;
	}

	return (elements_count);
}
