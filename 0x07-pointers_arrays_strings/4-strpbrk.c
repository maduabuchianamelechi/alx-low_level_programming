#include "main.h"

/**
 * _strpbrk - serches @s for the first occurance of @accept
 *
 * @s: String to search
 *
 * @accept: String to match
 *
 * Return: Returns a pointer to the match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (NULL);
}
