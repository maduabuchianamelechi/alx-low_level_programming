#include "main.h"

/**
 * *_strncat - Appends the n number of strings to
 *		the end of @dest.
 *
 * @dest: A pointer to the string to be appended upon
 *
 * @src: The string to append
 *
 * @n: The number of strings to append from @src
 *
 * Return: Returns the pointer to @desc
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	x = 0;

	while (dest[x])
		x++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[x + i] = src[i];

	dest[x + i] = '\0';

	return (dest);
}
