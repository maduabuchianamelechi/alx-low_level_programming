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

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		result = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", result);
	}
	return (0);
}
