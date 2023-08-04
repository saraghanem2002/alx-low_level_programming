#include "main.h"

/**
 * flip_bits - returns num of bits needed to flip to get from num to num.
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int x = 0;
	unsigned long int pos;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		pos = xor >> i;
		if (pos & 1)
			x++;
	}

	return (x);
}
