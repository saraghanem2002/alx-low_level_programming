#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int z = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		z = 2 * z + (b[x] - '0');
	}

	return (z);
}

