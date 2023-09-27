#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int x;
	int h;
	
	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{	

			for (x = size - h; x > 1; x--)
			{				
				_putchar(' ');
			}

			for (x = 0; x < h + 1; x++)
			{
				_putchar('#');
			}

			if (h == size)

				continue;

		_putchar('\n');
		
		}
	}
	_putchar('\n');
}
