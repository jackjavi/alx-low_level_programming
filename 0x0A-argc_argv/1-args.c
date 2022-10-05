#include <stdio.h>

/**
 * main - prints number of command line arguments
 * @argc: number of command line arguments
 * to be printed
 * @argv: array of command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
