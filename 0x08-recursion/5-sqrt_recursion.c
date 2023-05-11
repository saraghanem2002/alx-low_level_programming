#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer n
 * Return: integer (the result0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helperMethod1(n, 0));
}

/**
 * helperMethod1 - helper method to find the result
 * @n: integer n (number to get its square root)
 * @x: input to try numbers
 * Return: integer (the result)
 */
int helperMethod1(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (helperMethod1(n, x + 1));
	}
}
