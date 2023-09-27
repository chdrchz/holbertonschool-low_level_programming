#include "main.h"
/**
 * print_line - writing a straight line
 * @n: variable
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}

	_putchar('_');

	}

	_putchar('\n');
}
