#include "main.h"

/**
 * print_sign - (Entry point) prints the sign of a number
 *
 * @c: The number to be checked
 *
 * Return: Returns 1 and print `+` if > 0
 *	   Returns 0 and print `0` if = 0
 *	   Returns -1 and print `-` if < 0
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (c == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
