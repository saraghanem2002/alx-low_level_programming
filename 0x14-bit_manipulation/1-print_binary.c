#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int x;
	unsigned long int z;
	int count = 0;

	for (x = 63; x >= 0; x--)
	{
		z = n >> x;

		if (z & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
