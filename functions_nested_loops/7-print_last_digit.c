#include "main.h"
/**
 * print_last_digit - print last digit twice
 *
 * Return: x % 10
 */
int print_last_digit(int x)
{
	if ((x % 10) < 0)
		x *= -1;
	_putchar((x % 10) + '0');
		return (x % 10);
}
