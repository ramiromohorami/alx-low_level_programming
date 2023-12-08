#include "lists.h"

/**
 * dlistint_len -  return length of the list
 * @h: address of the head of list
 * Return: size
 */
size_t dlist_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
