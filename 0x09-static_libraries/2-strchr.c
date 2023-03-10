#include "main.h"

/**
 * _strchr - Searches a string s for the first occurance of c
 *
 * @s: A pointer to the string to search
 *
 * @c: Character to find
 *
 * Return: Returns a pointer to the matched string or NULL if not found
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return ('\0');
		}
	}
	return ('\0');
}
