#include "main.h"

/**
 * clear_bit -  sets bit at index to 0
 * @n: number
 * @index: index
 * Return: 1 if succes -1 if false
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
