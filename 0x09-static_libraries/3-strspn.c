#include "main.h"

/**
 * _strspn - counts the byte of @accept in @s
 *
 * @s: String to scan
 *
 * @accept: String to match
 *
 * Return: Returns the number in bytes of @accept in @s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (i = 0; accept[i] != s[counter]; i++)
		{
			if (accept[i] == '\0')
				return (counter);
		}
	}
	return (counter);
}
