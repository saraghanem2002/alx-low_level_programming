#include "main.h"
/**
 *_memcpy -  copies n bytes from memory area src,
 *to memory area dest
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int x = n;

	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
