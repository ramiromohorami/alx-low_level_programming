#include "main.h"

/**
 * set_bit -  sets bit at index to 1
 * @n: number
 * @index: index
 * Return: 1 if succes -1 if false
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n* = ((1 << index) | n*);
	return (1);	
}
