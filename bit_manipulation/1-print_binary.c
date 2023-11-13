#include "main.h"
#include <stdbool.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be translated to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int num_bits, i;
	unsigned long int bit;
	bool first;
	
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	num_bits = sizeof(n) * 8;

	first = false;

	for (i = num_bits - 1; i >= 0; --i)
	{
		bit = (n >> i) & 1;
	}
}
