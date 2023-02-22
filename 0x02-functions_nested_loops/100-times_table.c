#include"main.h"

/**
 * print_times_table - prints the times table of n number
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 * @n: The number to print its times table
 *
 * Return: Returns nothing (void)
*/

void print_times_table(int n)
{
	int num, mult, prod;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				/*
				 * put space if product is single number
				 * place the first digit if two numbers
				 */
				if (prod <= 9)
				{
					_putchar(' ');
				}
				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + 48); /* gets the first digit*/
				}
				_putchar((prod % 10) + 48); /* gets the second digit*/
			}
			_putchar('\n');
		}
	}
}
