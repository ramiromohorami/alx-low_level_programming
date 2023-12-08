#include "lists.h"

/**
 * add_dnodeint - adds new head node to dlist
 * @head: address of pointer the currente head node
 * @n: int field
 * Return: address of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->nex = NULL;
	}
	else
	{
		new->newt = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
