#include "main.h"

/**
 * _isdigit - (Entry point) checks if aiphabet or not
 *
 * @c: character to be checked
 *
 * Return: Returns 1 if a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
