#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate of the string str
 * @str: char
 * Return: pointer to a new string or Null if str = NULL
 */
char *_strdup(char *str)
{
	char *x;
	int i = 0;
	int y = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		x[y] = str[y];

	return (x);
}
