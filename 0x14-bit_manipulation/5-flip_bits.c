#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * to get from number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	unsigned long int curr;
	unsigned long int z = n ^ m;
	int count = 0;

	for (x = 63; x >= 0; x--)
	{
		curr = z >> x;
		if (curr & 1)
			count++;
	}

	return (count);
}
