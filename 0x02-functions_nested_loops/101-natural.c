#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints multiples of 3 and 5 under 1024
 *
 * Return: Returns 0
 */

int main(void)
{
	int n;
	int sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf('%d\n', sum);

	return (0);
}
