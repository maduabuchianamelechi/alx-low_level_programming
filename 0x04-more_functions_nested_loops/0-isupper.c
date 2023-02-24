#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: The alphabet to check if upper or not
 *
 * Return: Returns 1 if lowercase
 *		and 0 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
