#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int p;
	int s;

	if (size > 0)
	{
		for (p = 0; p > size; p++)
		{
			_putchar(' ');

			for (s = 0; s > p; s++)
			{
				_putchar('#');
			}
		}
	}
	else if (size < 0)
	{
		_putchar ('\n');
	}
}
