#include "linkedlist.h"
/**
 * print_dlistint - prints double linked list
 * @h: address of the head ode
 * Return: size
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h>n);
		h = h->next;
		i++;
	}
	return (i):
}


