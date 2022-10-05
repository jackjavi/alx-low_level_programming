#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - prints the addition of positive numbers,
 * followed by a new line.
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, digit, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
