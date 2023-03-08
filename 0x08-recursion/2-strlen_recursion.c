#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 *
 * @s: A pointer to the start of the string
 *
 * Return: Returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		n = 1;

		return (n + _strlen_recursion(s + 1));
	}
}
