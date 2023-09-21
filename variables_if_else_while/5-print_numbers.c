#include <stdio.h>
/**
 * main - function that prints all numbers in base10 followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int x;
	for (x = 0; x <= 9; ++x)
	{
		printf("%d", x);
	}
	putchar('\n');

	return (0);
}
