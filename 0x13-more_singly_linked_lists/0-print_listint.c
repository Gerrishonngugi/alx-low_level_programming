#include "lists.h"
/**
 * print_listint - Prints elements of a linked list
 * @h: Linked list of type listint_t to display
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
