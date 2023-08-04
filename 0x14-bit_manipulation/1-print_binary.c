#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 * return: void.
 */

void print_binary(unsigned long int n)
{
	int i;
	int x = 0;
	unsigned long int pos;

	for (i = 63; i >= 0; i--)
	{
		pos = n >> i;

		if (pos & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
