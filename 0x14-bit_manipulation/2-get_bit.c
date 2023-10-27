#include "main.h"

/**
 * get_bit - give bit value
 * @n: the number
 * @index: index to veify
 * Return: index if true -1 if error
 */

int get_bit(unsigned long int n, unsigned long int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
