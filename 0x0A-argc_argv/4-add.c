#include "main.h"

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
	int i;
	int result;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(i))
			printf("Error\n");
			return (1);
		else if (isdigit(i))
			result += atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
