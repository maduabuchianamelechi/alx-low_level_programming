#include "main.h"

/**
 * _memset - Fills @n number of @b at memory location @s
 *
 * @s: A pointer to the memory location to be filled
 *
 * @b: character to be filled
 *
 * @n: number of characters to fill.
 *
 * Return: Returns a pointer to the filled memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
