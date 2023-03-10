#include "main.h"

/**
 * _strcat - Appends a strings to the end of another string
 *
 * @dest: A pointer to the string to be concatenated upon
 *
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int ind = 0;
	int len = 0;

	while (dest[ind++])
		len++;

	for (ind = 0; src[ind]; ind++)
		dest[len++] = src[ind];
	return (dest);
}
