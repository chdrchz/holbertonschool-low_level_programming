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
	
	if (n > 0)
	{

	for (b = 0; b < n; b++)
	{
		for (s = 0; s < b; s++)
		
			_putchar(' ');
		
		_putchar(92);

		_putchar('\n');
	}

	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
