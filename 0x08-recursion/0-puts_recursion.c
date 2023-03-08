#include "main.h"

/**
 * _puts_recursion - Prints recursion of characters
 *
 * @s: A poiter to the start of the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
