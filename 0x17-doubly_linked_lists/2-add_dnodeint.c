#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of a dlistint_t list.
 * @head: head pointer of the list
 * @n: new node value
 * Return: address of new node or null if its fails
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
