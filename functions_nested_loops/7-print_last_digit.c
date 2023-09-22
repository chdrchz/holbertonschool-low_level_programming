#include "main.h"
/**
 * print_last_digit - print last digit twice
 * @x: variable that determines last digit
 * Return: last digit of number
 */
int print_last_digit(int x)
{
	int last_dig;

	last_dig = x % 10;
	if (last_dig < 0)
	{
		last_dig *= -1;
	}
	_putchar('0' + last_dig);
	return (last_dig);
}
