#include <stdio.h>
/**
 * main - function that prints all numbers in base10 using only putchar
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; ++x)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
