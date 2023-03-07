#include "main.h"

/**
 * _memcpy - Copies n characters from src to dest
 *
 * @dest: A pointer to the destination
 *
 * @src: A pointer to the source
 *
 * @n: Number of characters to copy
 *
 * Return: A pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
