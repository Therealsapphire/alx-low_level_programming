#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet in lowercase, followed by new line
 * you can only use the putchar
 * Return: Always 0.
 */
int main(void)
{
	int l = 'a';
	while (l <= 'z')
	{
	putchar(l);
	l += 1;
	}

	putchar('\n');
	return (0);
}
