#include "main.h"

/**
 * binary_to_uint - func to convert from binary to unsigned int.
 * @b: point to binary string.
 * Return: unsigned int with decimal value or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
