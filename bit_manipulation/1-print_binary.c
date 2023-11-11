#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be translated to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(0);
	}

	if (n)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
