#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int n_excl_m = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = n_excl_m >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

