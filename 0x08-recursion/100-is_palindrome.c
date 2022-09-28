#include"main.h"

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = string(s) - 1;
	return (is_palindrome(0, i, s));
}
