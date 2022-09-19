#include <stdio.h>

/**
 * main - storing the address of a variable in a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Address of 'n': %p\n", &n);
	printf("Vale of 'p': %p\n", p);
	return (0);
}
