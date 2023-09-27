#include "main.h"
/**
 * print_numbers - printing all numbers 0 - 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n >= 48; n <= 57)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
}
