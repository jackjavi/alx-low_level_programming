#include <stdio.h>

/**
 * main - solve me!
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	printf("Value of a[0]: %d\n", *a);
	printf("Address of a + 1: %p\n", (a + 1));
	*(a + 2) = 298;
	a[3] = 398;
	printf("Value of a[3]: %d\n", *(a + 3));
	*(a + 4) = 498;
	p = a + 1;
	printf("Value of p: %p\n", p);
	*p = 98;
	printf("Value of a[1]: %d\n", *(a + 1));
	p2 = a + 3;
	printf("Value of p2: %p\n", p2);
	*p2 = *p + 1337;
	printf("Value of a[3]: %d\n", *(a + 3));
	return (0);
}
