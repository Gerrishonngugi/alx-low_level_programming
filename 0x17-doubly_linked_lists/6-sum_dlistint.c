#include "lists.h"

/**
 * sum_dlistint - sums all of data of dlistint_t linked list
 * @head: pointer to start of linked list
 *
 * Return: data sum  or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
