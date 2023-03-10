#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: The alphabet to check if lower or not
 *
 * Return: Returns 1 if lowercase
 *		and 0 if not.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
