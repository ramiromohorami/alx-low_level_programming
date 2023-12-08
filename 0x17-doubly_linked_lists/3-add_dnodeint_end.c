#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of the list
 * @head: address of the pointer of the current node
 * @n: int field
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next)
			node =  node->next;
		node->next = new;
		new->prev = node;
	}
	return (new);
}
