#include "lists.h"
/**
 * get_nodeint_at_index - Retrieves node at specified index in a linked list
 * @head: Pointer to the first node in the list
 * @index: Index of the desired node
 *
 * Return: Pointer to node at the index or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
