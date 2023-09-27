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
	
	for (h = 1; h <= size; h++)
	{
		for (x = size - h; x > 0; x--)
					
			putchar(' ');

		for (x = 0; x < h; x++);

			putchar('#');

		if (h == size)

			continue;

	_putchar('\n');
		
	}
	_putchar('\n');	
}
