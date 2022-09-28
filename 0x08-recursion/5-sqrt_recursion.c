#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @g:guess at sqrt
 * @n: number to find sqrt of
 * Return: -1 or sqrt of c
 */
int _sqrt_recursion(int n)
{
	if(g * g == n)
		return (g);
	if(g * g > n)
		return (-1);
	return (sqrt_check (g + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
