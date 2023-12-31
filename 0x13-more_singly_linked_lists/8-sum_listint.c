#include "lists.h"
/**
 * sum_listint - Computes the sum of data in a listint_t linked list
 * @head: Pointer to the first node in the list
 *
 * Return: The total sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
