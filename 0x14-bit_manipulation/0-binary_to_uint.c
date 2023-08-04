#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int x;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimal = decimal * 2 + (b[x] - '0');
	}

	return (decimal);
}
