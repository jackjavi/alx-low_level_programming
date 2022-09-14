/*
 * File: 7-print_last_digit.c
 * Auth: Jack Mtembete
 */

#include "main.h"

/**
 * print_last_digit - Prints last digit of a number.
 * @n: The last digit to be printed.
 *
 * Return: Returns last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
