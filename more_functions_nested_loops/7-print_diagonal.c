#include "main.h"
/**
 * print_diagonal - printing on a diagonal
 *
 * Return: ?
 */
void print_diagonal(int n)
{
	int b;
	int s;

	for (b = 0; b < n; b++)
	{
		for (s = 0; s < n; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
