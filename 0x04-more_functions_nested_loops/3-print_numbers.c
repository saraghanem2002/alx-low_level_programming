#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * return: void
 */

void print_numbers(void)
{
	for (char c = '0'; c <= '9' ; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
