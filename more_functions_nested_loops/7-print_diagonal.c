#include "main.h"
/**
 * print_diagonal - printing on a diagonal
 *
 * Return: ?
 */
void print_diagonal(int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b < n)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
