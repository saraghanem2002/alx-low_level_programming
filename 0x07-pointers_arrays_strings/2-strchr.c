#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the char c
 * in the string s,
 * or NULL if the character is not found
 * @s: string s
 * @c: char c
 * Return: returns a pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
