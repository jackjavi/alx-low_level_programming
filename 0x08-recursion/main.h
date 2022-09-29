#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
char _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int find_sqrt(int num, int root);
int is_prime_number(int n);
int is_divisible(int num, int div);
int is_palindrome(char *s);
int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int wildcmp(char *s1, char *s2);
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);

#endif /* MAIN_H */
