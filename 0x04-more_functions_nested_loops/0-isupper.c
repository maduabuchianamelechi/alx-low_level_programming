#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: The alphabet to check if upper or not
 *
 * Return: Returns 1 if lowercase
 *		and 0 if not.
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return(0);
}
