#include "main.h"

/**
 * main - Entry point; prints its arguments
 *
 * @argc: The number of arguments passed.
 *
 * @argv: A pointer to the arguments passed
 *
 * Return: Returns 0 on success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
