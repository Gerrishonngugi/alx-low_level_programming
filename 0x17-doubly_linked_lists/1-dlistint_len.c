#include "lists.h"

/**
 * dlistint_len - returns and counts number of elements of dlistint_t list.
 * @h: points head of the list
 * Return: nodes in the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
	return (size);

	while (h)
	{
	size++;
	h = h->next;
	}
	return (size);
}
