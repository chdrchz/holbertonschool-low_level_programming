#include "main.h"
/**
 * print_last_digit - print last digit twice
 *
 * Return: x % 10
 */
int print_last_digit(int x)
{
	last_dig = x % 10;

	if (last_dig < 0)
	{
		last_dig *= -1;
	}
	_putchar('0' + last_dig);
	return (last_dig);
}
