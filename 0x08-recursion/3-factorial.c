#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number n
 * Return: integer (answer of factorial)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
