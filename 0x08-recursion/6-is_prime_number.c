#include "main.h"
/**
 * is_prime_number -  returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: integer n
 * Return: 1 if n is a prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (isPrime(n, n - 1));
	}
}

/**
 * isPrime - checks if number is prime
 * @n: integer n
 * @x: integer n (input)
 * Return: 1 if n is prime, 0 if not prime
 */
int isPrime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	else
	{
		return (isPrime(n, x - 1));
	}
}
