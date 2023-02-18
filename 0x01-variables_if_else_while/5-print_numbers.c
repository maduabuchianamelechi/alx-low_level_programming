#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digits in base 10 starting from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d\n", number);
		number++;
	}

	return (0);
}
