#include "main.h"

/**
 * _islower -  checks for lowercase character.
 * @c: is the char to be checked
 * return : 1 for lowercase or 0 otherwise.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
