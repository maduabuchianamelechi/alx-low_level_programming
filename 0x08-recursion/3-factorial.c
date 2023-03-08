#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: The number to calculate the factorial
 *
 * Return: Returns -1 if @a < 0, the factorial if @a > 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
