#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] == 'a' || n[i] == 'A')
		{
			n[i] = '4';
		}

		if (n[i] == 'e' || n[i] == 'E')
		{
			n[i] = '3';
		}

		if (n[i] == 'o' || n[i] == 'O')
		{
			n[i] = '0';
		}

		if (n[i] == 't' || n[i] == 'T')
		{
			n[i] = '7';
		}

		if (n[i] == 'l' || n[i] == 'L')
		{
			n[i] = '1';
		}
		i++;
	}
	return (n);
}
