#include <stdio.h>
/**
 * main - function that prints all numbers in base16
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 15; x++)
	{
		printf("%x", x);
	}
	putchar('\n');

	return (0);
}
