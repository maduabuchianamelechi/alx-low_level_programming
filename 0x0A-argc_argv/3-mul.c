#include "main.h"

/**
 * main - Entry point; multiplies two numbers
 *
 * @argc: The number of arguments
 *
 * @argv: A pointer to the arguments
 *
 * Return: Returns 0 on success and 1 on error
 */

int main(int argc, int *argv[])
{
	int i = 1;
	int m = 2;
	int result;

	if (argc < m)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		result = argv[i] * argv[m];
		printf("%d\n", result);
		return (0);
	}
}
