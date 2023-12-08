#include "lists.h"

/**
 * free_dlistint -  free a double list
 * @head: pointer to the head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
	}
}
