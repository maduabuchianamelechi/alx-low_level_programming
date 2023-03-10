#include "main.h"

/**
 * main - Entry point; prints the number of arguments
 *
 * @argc: Holds the number of arguments
 *
 * @argv: Holds the pointer to the arguments
 *
 * Return: Returns 0 at success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0;
	int sum;

	while (i < argc)
	{
		sum = i;
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
