#include "main.h"

/**
 * _pow_recursion - calculates the power of @x by @y
 *
 * @x: Integer x
 *
 * @y: Integer y
 *
 * Return: Returns the power of @x by @y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		result *= _pow_recursion(x, y - 1);
		return (result);
	}
}
