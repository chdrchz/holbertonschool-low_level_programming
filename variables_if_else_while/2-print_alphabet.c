#include <stdio.h>
/**
 * main - using putchar function
 *
 * x is my placeholder for every letter in the alphabet
 * Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');

	return (0);
}
