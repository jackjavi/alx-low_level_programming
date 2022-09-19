#include <stdio.h>

/**
 * modif_my_char_var - solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - solve me!
 *
 * Return 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of c: %d (%c)\n", c, c);
	printf("Address of c: %p\n", &c);
	printf("Value of p: %p\n", p);
	printf("Address of p: %p\n", &p);
	modif_my_char_var(p, c);
	printf("Value of c: %d %c\n", c, c);
	return (0);
}
