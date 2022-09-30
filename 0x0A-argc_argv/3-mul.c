#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number f command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc > 2)
	{
		int a, b, result;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
