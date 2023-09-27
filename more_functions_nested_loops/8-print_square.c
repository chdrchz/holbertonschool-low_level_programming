#include "main.h"
/**
 * print_square - printing a square based on input
 * @size: size of the box
 * Return: 0
 */
void print_square(int size)
{
	int x;
	int s;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
