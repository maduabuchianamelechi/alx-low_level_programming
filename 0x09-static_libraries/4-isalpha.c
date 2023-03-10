#include "main.h"

/**
 * _isalpha - (Entry point) checks if aiphabet or not
 *
 * @c: character to be checked
 *
 * Return: Returns 1 if alphabet and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
		return (1);
	return (0);
}
