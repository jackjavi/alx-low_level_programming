/**
 * File: 4-isalpha.c
 * Auth: Jack Mtembete
 */

#include "main.h"

/**
 * isalpha - A function that checks for alphabetic character.
 * @c: Character to be checked.
 *
 * Return: Return 1 if letter either upper or lowercase and 0 when not a letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
