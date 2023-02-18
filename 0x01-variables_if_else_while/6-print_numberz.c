#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single numbers 1 to 10
 *
 * Return: Always 0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
